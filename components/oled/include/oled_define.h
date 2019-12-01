#ifndef _OLED_DEFINE_H_
#define _OLED_DEFINE_H_

#include "driver/gpio.h"

#if 0
#define OLED_SCLK_PIN                    GPIO_NUM_34
#define OLED_SCLK_H                      gpio_set_level(OLED_SCLK_PIN, 1)
#define OLED_SCLK_L                      gpio_set_level(OLED_SCLK_PIN, 0)

#define OLED_SDIN_PIN                    GPIO_NUM_35
#define OLED_SDIN_H                      gpio_set_level(OLED_SDIN_PIN, 1)
#define OLED_SDIN_L                      gpio_set_level(OLED_SDIN_PIN, 0)

#define OLED_DC_PIN                      GPIO_NUM_25
#define OLED_DC_H                        gpio_set_level(OLED_DC_PIN, 1)
#define OLED_DC_L                        gpio_set_level(OLED_DC_PIN, 0)

#define OLED_RES_PIN                     GPIO_NUM_26
#define OLED_RES_H                       gpio_set_level(OLED_RES_PIN, 1)
#define OLED_RES_L                       gpio_set_level(OLED_RES_PIN, 0)

#define OLED_CS_PIN                      GPIO_NUM_27
#define OLED_CS_H                        gpio_set_level(OLED_CS_PIN, 1)
#define OLED_CS_L                        gpio_set_level(OLED_CS_PIN, 0)
#endif

//use other pin will be error
#define OLED_SCLK_PIN                    GPIO_NUM_19
#define OLED_SCLK_H                      gpio_set_level(OLED_SCLK_PIN, 1)
#define OLED_SCLK_L                      gpio_set_level(OLED_SCLK_PIN, 0)

#define OLED_SDIN_PIN                    GPIO_NUM_23
#define OLED_SDIN_H                      gpio_set_level(OLED_SDIN_PIN, 1)
#define OLED_SDIN_L                      gpio_set_level(OLED_SDIN_PIN, 0)

#define OLED_DC_PIN                      GPIO_NUM_21
#define OLED_DC_H                        gpio_set_level(OLED_DC_PIN, 1)
#define OLED_DC_L                        gpio_set_level(OLED_DC_PIN, 0)

#define OLED_RES_PIN                     GPIO_NUM_18
#define OLED_RES_H                       gpio_set_level(OLED_RES_PIN, 1)
#define OLED_RES_L                       gpio_set_level(OLED_RES_PIN, 0)

#define OLED_CS_PIN                      GPIO_NUM_22
#define OLED_CS_H                        gpio_set_level(OLED_CS_PIN, 1)
#define OLED_CS_L                        gpio_set_level(OLED_CS_PIN, 0)

#endif // _OLED_DEFINE_H_