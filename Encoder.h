#ifndef ENCODER_H
#define ENCODER_H

#include <Arduino.h>
#include "Config.h"

class Encoder
{
public:
    void begin();

    long getFL();
    long getFR();
    long getRL();
    long getRR();

    void resetAll();

    static void FL_ISR();
    static void FR_ISR();
    static void RL_ISR();
    static void RR_ISR();

private:
    static volatile long flCount;
    static volatile long frCount;
    static volatile long rlCount;
    static volatile long rrCount;
};

#endif
