#ifndef COMMS_H
#define COMMS_H

#include "sensors.h"
#include <stdint.h>

void init_comms(void);
int build_packet(sensor_data_t* data, uint8_t* buffer);
int transmit_packet(uint8_t* packet, int len);

#endif#ifndef COMMS_H
#define COMMS_H

#include "sensors.h"
#include <stdint.h>

void init_comms(void);
int build_packet(sensor_data_t* data, uint8_t* buffer);
int transmit_packet(uint8_t* packet, int len);

#endif
