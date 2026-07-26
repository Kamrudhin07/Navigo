#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
#include "Config.h"

class Motor
{
public:

    void begin();

    // Basic Motion
    void forward(uint8_t speed);
    void backward(uint8_t speed);

    // Differential Steering
    void tankLeft(uint8_t speed);
    void tankRight(uint8_t speed);

    // Pivot Turns
    void pivotLeft(uint8_t speed);
    void pivotRight(uint8_t speed);

    // Smooth Turns
    void curveLeft(uint8_t speed);
    void curveRight(uint8_t speed);

    // Individual Motor Control
    void setFL(bool dir, uint8_t speed);
    void setFR(bool dir, uint8_t speed);
    void setRL(bool dir, uint8_t speed);
    void setRR(bool dir, uint8_t speed);

    // Stop
    void stop();
};

#endif
