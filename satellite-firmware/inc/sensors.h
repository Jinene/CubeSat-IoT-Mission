#ifndef SENSORS_H
#define SENSORS_H

#include <stdint.h>

typedef struct {
    float temperature;
    float humidity;
    float pm25;
} sensor_data_t;

void init_sensors(void);
sensor_data_t read_all_sensors(void);

#endif
