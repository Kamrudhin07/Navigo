#include "Motor.h"

void Motor::begin()
{
    pinMode(FL_PWM, OUTPUT);
    pinMode(FR_PWM, OUTPUT);
    pinMode(RL_PWM, OUTPUT);
    pinMode(RR_PWM, OUTPUT);

    pinMode(FL_DIR, OUTPUT);
    pinMode(FR_DIR, OUTPUT);
    pinMode(RL_DIR, OUTPUT);
    pinMode(RR_DIR, OUTPUT);

    stop();
}

void Motor::setFL(bool dir, uint8_t speed)
{
    digitalWrite(FL_DIR, dir);
    analogWrite(FL_PWM, speed);
}

void Motor::setFR(bool dir, uint8_t speed)
{
    digitalWrite(FR_DIR, dir);
    analogWrite(FR_PWM, speed);
}

void Motor::setRL(bool dir, uint8_t speed)
{
    digitalWrite(RL_DIR, dir);
    analogWrite(RL_PWM, speed);
}

void Motor::setRR(bool dir, uint8_t speed)
{
    digitalWrite(RR_DIR, dir);
    analogWrite(RR_PWM, speed);
}

void Motor::forward(uint8_t speed)
{
    setFL(FORWARD, speed);
    setFR(FORWARD, speed);
    setRL(FORWARD, speed);
    setRR(FORWARD, speed);
}

void Motor::backward(uint8_t speed)
{
    setFL(REVERSE, speed);
    setFR(REVERSE, speed);
    setRL(REVERSE, speed);
    setRR(REVERSE, speed);
}

void Motor::tankLeft(uint8_t speed)
{
    setFL(REVERSE, speed);
    setFR(FORWARD, speed);

    setRL(REVERSE, speed);
    setRR(FORWARD, speed);
}

void Motor::tankRight(uint8_t speed)
{
    setFL(FORWARD, speed);
    setFR(REVERSE, speed);

    setRL(FORWARD, speed);
    setRR(REVERSE, speed);
}

void Motor::pivotLeft(uint8_t speed)
{
    tankLeft(speed);
}

void Motor::pivotRight(uint8_t speed)
{
    tankRight(speed);
}

void Motor::curveLeft(uint8_t speed)
{
    setFL(FORWARD, speed / 2);
    setFR(FORWARD, speed);

    setRL(FORWARD, speed / 2);
    setRR(FORWARD, speed);
}

void Motor::curveRight(uint8_t speed)
{
    setFL(FORWARD, speed);
    setFR(FORWARD, speed / 2);

    setRL(FORWARD, speed);
    setRR(FORWARD, speed / 2);
}

void Motor::stop()
{
    analogWrite(FL_PWM, 0);
    analogWrite(FR_PWM, 0);
    analogWrite(RL_PWM, 0);
    analogWrite(RR_PWM, 0);
}
