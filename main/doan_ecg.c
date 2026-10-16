#include "ads1293.h"
#include "esp_log.h"

void app_main(void)
{
    ads1293_config_t config = {
        .mosi = 11,
        .miso = 13,
        .sclk = 12,
        .cs = 10,
        .drdy = 9,
        .spi_clock_hz = 1000000};

    ESP_ERROR_CHECK(ads1293_init(&config));

    ESP_LOGI("ADS1293", "SPI bus initialized");
}