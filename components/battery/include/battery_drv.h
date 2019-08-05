#ifndef _BATTERY_DRV_H_
#define _BATTERY_DRV_H_


#include "stdint.h"

void battery_module_open(void);

uint16_t battery_gpio_init(void);

int battery_adc_get_value(void);

#endif // _BATTERY_DRV_H_