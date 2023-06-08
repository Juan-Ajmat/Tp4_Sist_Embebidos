#ifndef BSP_H
#define BSP_H

#include <stdbool.h>
#include "digital.h"
#include <stdint.h>


typedef struct board_s {
    DigitalOutput_t buzzer;
    DigitalInput_t set_time;
    DigitalInput_t set_alarm;
    DigitalInput_t decrement;
    DigitalInput_t increment;
    DigitalInput_t accept;
    DigitalInput_t cancel;
    display_t display;

}const * const board_t;

board_t BoardCreate(void);

#endif