#ifndef _BOARD_API_H_
#define _BOARD_API_H_

#include <stdint.h>

void board_module_open(void);

void board_gpio_init(void);

void board_led_toggle(uint32_t val,uint32_t delay);

void board_led_set(uint32_t val);

#endif // _BOARD_API_H_