#include "cjmcu_1100.h"
#include "driver/gpio.h"
#include "driver/adc.h"

cjmcu_1100_handle_t cjmcuc_1100_create(gpio_num_t aout, uint16_t dout) {
    cjmcu_1100_handle_t handle;
    handle.aout = aout;
    handle.dout = dout;

    gpio_set_direction(aout, GPIO_MODE_INPUT);
    gpio_set_direction(dout, GPIO_MODE_INPUT);
    return handle;
}

void cjmcu_1100_get_data(cjmcu_1100_handle_t handle, cjmcu_1100_data_t *const data) {
    cjmcu_1100_data_t temp_data;

    temp_data.D0 = digital_get_level(handle.dout);
}