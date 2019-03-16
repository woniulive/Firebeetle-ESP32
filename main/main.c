#include "freertos/FreeRTOS.h"
#include "esp_event_loop.h"
#include "driver/gpio.h"
#include "battery_drv.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
    int level = 0;

    while (true)
    {
        gpio_set_level(GPIO_NUM_2, level);
        level = !level;
        vTaskDelay(300 / portTICK_PERIOD_MS);
        printf("Hello world\n");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}

