#include "freertos/FreeRTOS.h"
#include "esp_event_loop.h"
#include "driver/gpio.h"
#include "battery_drv.h"
#include "oled_api.h"
#include "board_api.h"

void app_main(void)
{
    //battery_module_open();
    oled_module_open();
    board_module_open();

    oled_clean_screen();
    oled_dis();

    uint32_t level = 0;

    while (true)
    {
        board_led_set(level);
        level = !level;
        vTaskDelay(300 / portTICK_PERIOD_MS);
        printf("Hello world\n");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
        //printf("adc:%d\n",battery_adc_get_value());
    }
}

