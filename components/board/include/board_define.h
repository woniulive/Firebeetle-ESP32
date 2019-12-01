#ifndef _BOARD_DEFINE_H_
#define _BOARD_DEFINE_H_

#include "driver/gpio.h"

#define BOARD_LED_PIN                    GPIO_NUM_2
#define BOARD_LED_H                      gpio_set_level(BOARD_LED_PIN, 1)
#define BOARD_LED_L                      gpio_set_level(BOARD_LED_PIN, 0)

#endif // _BOARD_DEFINE_H_