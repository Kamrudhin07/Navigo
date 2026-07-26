#include "Encoder.h"

// Initialize encoder counts
volatile long Encoder::flCount = 0;
volatile long Encoder::frCount = 0;
volatile long Encoder::rlCount = 0;
volatile long Encoder::rrCount = 0;

void Encoder::begin()
{
    pinMode(FL_ENC, INPUT_PULLUP);
    pinMode(FR_ENC, INPUT_PULLUP);
    pinMode(RL_ENC, INPUT_PULLUP);
    pinMode(RR_ENC, INPUT_PULLUP);

    attachInterrupt(digitalPinToInterrupt(FL_ENC), FL_ISR, RISING);
    attachInterrupt(digitalPinToInterrupt(FR_ENC), FR_ISR, RISING);
    attachInterrupt(digitalPinToInterrupt(RL_ENC), RL_ISR, RISING);
    attachInterrupt(digitalPinToInterrupt(RR_ENC), RR_ISR, RISING);
}

// ISR Functions

void Encoder::FL_ISR()
{
    flCount++;
}

void Encoder::FR_ISR()
{
    frCount++;
}

void Encoder::RL_ISR()
{
    rlCount++;
}

void Encoder::RR_ISR()
{
    rrCount++;
}

// Getter Functions

long Encoder::getFL()
{
    noInterrupts();
    long value = flCount;
    interrupts();
    return value;
}

long Encoder::getFR()
{
    noInterrupts();
    long value = frCount;
    interrupts();
    return value;
}

long Encoder::getRL()
{
    noInterrupts();
    long value = rlCount;
    interrupts();
    return value;
}

long Encoder::getRR()
{
    noInterrupts();
    long value = rrCount;
    interrupts();
    return value;
}

void Encoder::resetAll()
{
    noInterrupts();

    flCount = 0;
    frCount = 0;
    rlCount = 0;
    rrCount = 0;

    interrupts();
}
