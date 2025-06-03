#include "driver/gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    gpio_num_t aout;
    uint16_t dout;
} cjmcu_1100_handle_t;

typedef struct {
    uint16_t A0;
    uint8_t D0;
} cjmcu_1100_data_t;

cjmcu_1100_handle_t cjmcuc_1100_create(gpio_num_t aout, uint16_t dout);
void cjmcu_1100_get_data(cjmcu_1100_handle_t handle, cjmcu_1100_data_t *const data);

#ifdef __cplusplus
}
#endif