
#include "ads1293.h"

static spi_device_handle_t ads_spi = NULL;

esp_err_t ads1293_init(const ads1293_config_t *config)
{
    if (config == NULL || config->spi_clock_hz == 0)
    {
        return ESP_ERR_INVALID_ARG;
    }

    spi_bus_config_t spi_config = {
        .mosi_io_num = config->mosi,
        .miso_io_num = config->miso,
        .sclk_io_num = config->sclk,
        .quadwp_io_num = -1,
        .quadhd_io_num = -1,
        .max_transfer_sz = 32};

    // 1. Khoi tao SPI bus
    esp_err_t err = spi_bus_initialize(
        SPI2_HOST,
        &spi_config,
        SPI_DMA_DISABLED);

    if (err != ESP_OK)
    {
        return err;
    }

    // 2. Cau hinh thiet bi ADS1293
    spi_device_interface_config_t dev_config = {
        .clock_speed_hz = config->spi_clock_hz,
        .mode = 0,
        .spics_io_num = config->cs,
        .queue_size = 1};

    // 3. Dang ky ADS1293
    err = spi_bus_add_device(
        SPI2_HOST,
        &dev_config,
        &ads_spi);

    if (err != ESP_OK)
    {
        spi_bus_free(SPI2_HOST);
        return err;
    }

    return ESP_OK;
}
