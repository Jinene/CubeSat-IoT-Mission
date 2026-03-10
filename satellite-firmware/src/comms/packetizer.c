#include "comms.h"
#include "utils.h"
#include <string.h>

int build_packet(sensor_data_t* data, uint8_t* buffer) {
    // TLV packet encoding
    memcpy(buffer, &data->temperature, sizeof(float));
    memcpy(buffer+4, &data->humidity, sizeof(float));
    memcpy(buffer+8, &data->pm25, sizeof(float));
    return 12;
}

int transmit_packet(uint8_t* packet, int len) {
    // Placeholder: UART/SPI transmission logic
    if(len <= 0) return -1;
    return 0;
}
