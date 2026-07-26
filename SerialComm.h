#ifndef SERIALCOMM_H
#define SERIALCOMM_H

#include <Arduino.h>
#include "Encoder.h"
#include "Motor.h"

class SerialComm
{
public:
    void begin(long baud = 115200);

    void sendEncoders(Encoder &enc);

    void receiveCommand(Motor &motor);

private:
    String command;
};

#endif
