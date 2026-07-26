#ifndef CONFIG_H
#define CONFIG_H

/*--------------------------------------------------
        MOTOR DRIVER 1 (Front Motors)
---------------------------------------------------*/

// Front Left
#define FL_PWM      2
#define FL_DIR      22

// Front Right
#define FR_PWM      3
#define FR_DIR      23

/*--------------------------------------------------
        MOTOR DRIVER 2 (Rear Motors)
---------------------------------------------------*/

// Rear Left
#define RL_PWM      4
#define RL_DIR      24

// Rear Right
#define RR_PWM      5
#define RR_DIR      25

/*--------------------------------------------------
                ENCODER PINS
---------------------------------------------------*/

// Encoder Channel A Pins
#define FL_ENC      18
#define FR_ENC      19
#define RL_ENC      20
#define RR_ENC      21

/*--------------------------------------------------
                MOTOR DIRECTION
---------------------------------------------------*/

#define FORWARD HIGH
#define REVERSE LOW

/*--------------------------------------------------
                PWM LIMITS
---------------------------------------------------*/

#define MAX_SPEED 255
#define MIN_SPEED 0

/*--------------------------------------------------
                SERIAL
---------------------------------------------------*/

#define BAUD_RATE 115200

#endif
