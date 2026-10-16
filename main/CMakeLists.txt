
idf_component_register(
    SRCS "doan_ecg.c"
    INCLUDE_DIRS "."
    REQUIRES ads1293
    PRIV_REQUIRES spi_flash esp_psram
)
