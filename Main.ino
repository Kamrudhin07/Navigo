#include "Config.h"
#include "Motor.h"
#include "Encoder.h"
#include "SerialComm.h"

Motor motor;
Encoder encoder;
SerialComm comm;

unsigned long previousMillis = 0;
const unsigned long encoderInterval = 20;   // Send encoder data every 20 ms

void setup()
{
    motor.begin();
    encoder.begin();
    comm.begin(BAUD_RATE);

    Serial.println("Warehouse Rover Started");
}

void loop()
{
    // Receive commands from Raspberry Pi
    comm.receiveCommand(motor);

    // Send encoder values every 20 ms
    unsigned long currentMillis = millis();

    if(currentMillis - previousMillis >= encoderInterval)
    {
        previousMillis = currentMillis;
        comm.sendEncoders(encoder);
    }
}
