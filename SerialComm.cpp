#include "SerialComm.h"

void SerialComm::begin(long baud)
{
    Serial.begin(baud);
}

void SerialComm::sendEncoders(Encoder &enc)
{
    Serial.print("<");

    Serial.print(enc.getFL());
    Serial.print(",");

    Serial.print(enc.getFR());
    Serial.print(",");

    Serial.print(enc.getRL());
    Serial.print(",");

    Serial.print(enc.getRR());

    Serial.println(">");
}

void SerialComm::receiveCommand(Motor &motor)
{
    if (!Serial.available())
        return;

    command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "F")
    {
        motor.forward(180);
    }
    else if (command == "B")
    {
        motor.backward(180);
    }
    else if (command == "TL")
    {
        motor.tankLeft(180);
    }
    else if (command == "TR")
    {
        motor.tankRight(180);
    }
    else if (command == "PL")
    {
        motor.pivotLeft(180);
    }
    else if (command == "PR")
    {
        motor.pivotRight(180);
    }
    else if (command == "CL")
    {
        motor.curveLeft(180);
    }
    else if (command == "CR")
    {
        motor.curveRight(180);
    }
    else if (command == "S")
    {
        motor.stop();
    }
}
