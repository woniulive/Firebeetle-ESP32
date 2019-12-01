//
// Created by hiwsz on 2019/11/26.
//

#include "board_api.h"
#include "board_define.h"

void board_module_open(void)
{
    board_gpio_init();
}

void board_gpio_init(void)
{
    gpio_set_direction(BOARD_LED_PIN, GPIO_MODE_OUTPUT);
}

void board_led_toggle(uint32_t val,uint32_t delay)
{
    gpio_set_level(BOARD_LED_PIN, val);
    val = !val;
    gpio_set_level(BOARD_LED_PIN, val);
}

void board_led_set(uint32_t val)
{
    gpio_set_level(BOARD_LED_PIN, val);
}
