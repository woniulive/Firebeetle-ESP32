#ifndef _OLED_API_H_
#define _OLED_API_H_

#include <stdint.h>

void oled_module_open(void);

void oled_gpio_init(void);

void oled_reg_init(void);

void oled_write_command_8_bit(uint8_t command);

void oled_write_data_8_bit(uint8_t data);

void oled_write_data_16_bit(uint16_t data);

void oled_clean_screen(void);

void oled_dis(void);

#endif // _OLED_API_H_