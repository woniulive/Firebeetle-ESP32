set(COMPONENT_SRCS "oled_api.c")
set(COMPONENT_ADD_INCLUDEDIRS
        "include"
        "$ENV{IDF_PATH}/components/driver/include")
register_component()