//
// Created by hiwsz on 2019/3/16.
//

#include "battery_drv.h"

#define BATTERY_DET_GPIO GPIO_NUM_36
#define BATTERY_DET_ADC_CH ADC1_CHANNEL_0

void battery_module_open(void)
{
    battery_gpio_init();
}

uint16_t battery_gpio_init(void)
{
    return 0;
}
