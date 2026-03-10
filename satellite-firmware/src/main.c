#include "sensors.h"
#include "comms.h"
#include "utils.h"
#include "watchdog.h"

int main(void) {
    init_board();
    logger_init();
    init_sensors();
    init_comms();
    init_watchdog();

    logger_info("CubeSat firmware started");

    while(1) {
        sensor_data_t data = read_all_sensors();
        uint8_t packet[128];
        int packet_len = build_packet(&data, packet);
        if(transmit_packet(packet, packet_len) != 0) {
            logger_error("Telemetry transmission failed");
        } else {
            logger_info("Telemetry transmitted successfully");
        }

        reset_watchdog();
        delay_ms(1000);
    }

    return 0;
}
