#include "particulate_sensor.cpp"
#include "wifi_lorawan_config.h"

void setup() {
    Serial.begin(9600);
    initParticulateSensor();
    initLoRaWAN();
}

void loop() {
    float pm25 = readPM25();
    sendDataLoRa(pm25);
    delay(15000); // send every 15 seconds
}
