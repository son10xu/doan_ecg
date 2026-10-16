#ifndef ADS1293_H
#define ADS1293_H

#include "esp_err.h"
#include "driver/spi_master.h"

typedef struct
{
    int mosi;
    int miso;
    int sclk;
    int cs;
    int drdy;
    int spi_clock_hz;
} ads1293_config_t;

esp_err_t ads1293_init(const ads1293_config_t *config);

#endif