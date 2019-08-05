set(COMPONENT_SRCS "battery_drv.c")
set(COMPONENT_ADD_INCLUDEDIRS
        "include"
        "$ENV{IDF_PATH}/components/driver/include"
        "$ENV{IDF_PATH}/components/esp_adc_cal/include")
register_component()