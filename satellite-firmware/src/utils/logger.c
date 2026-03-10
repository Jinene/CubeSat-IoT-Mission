#include "utils.h"
#include <stdio.h>

void logger_init(void) {
    // Initialize logging (UART / SWO)
}

void logger_info(const char* msg) {
    printf("[INFO] %s\n", msg);
}

void logger_error(const char* msg) {
    printf("[ERROR] %s\n", msg);
}
