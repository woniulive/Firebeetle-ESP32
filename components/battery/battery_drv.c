//
// Created by hiwsz on 2019/3/16.
//

#include "battery_drv.h"
#include <driver/adc.h>
#include <esp_adc_cal.h>

#define BATTERY_DET_GPIO GPIO_NUM_36
#define BATTERY_DET_ADC_CH ADC1_CHANNEL_0

#define DEFAULT_VREF    1100        //Use adc2_vref_to_gpio() to obtain a better estimate

static esp_adc_cal_characteristics_t *adc_chars;

static const adc_atten_t atten = ADC_ATTEN_DB_0;
static const adc_unit_t unit = ADC_UNIT_1;

void battery_module_open(void)
{
    battery_gpio_init();
}

static void print_char_val_type(esp_adc_cal_value_t val_type)
{
    if (val_type == ESP_ADC_CAL_VAL_EFUSE_TP) {
        printf("Characterized using Two Point Value\n");
    } else if (val_type == ESP_ADC_CAL_VAL_EFUSE_VREF) {
        printf("Characterized using eFuse Vref\n");
    } else {
        printf("Characterized using Default Vref\n");
    }
}

uint16_t battery_gpio_init(void)
{
    adc1_config_width(ADC_WIDTH_BIT_12);
    adc1_config_channel_atten(BATTERY_DET_ADC_CH,ADC_ATTEN_DB_0);
    //Characterize ADC
    adc_chars = calloc(1, sizeof(esp_adc_cal_characteristics_t));
    esp_adc_cal_value_t val_type = esp_adc_cal_characterize(unit, atten, ADC_WIDTH_BIT_12, DEFAULT_VREF, adc_chars);
    print_char_val_type(val_type);
    return 0;
}

int battery_adc_get_value(void)
{
    int val = adc1_get_raw(BATTERY_DET_ADC_CH);
    return esp_adc_cal_raw_to_voltage(val,adc_chars);
}