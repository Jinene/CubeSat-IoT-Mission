#include <Wire.h>
#include "bme280_driver.cpp"
#include "wifi_lorawan_config.h"

void setup() {
    Serial.begin(9600);
    initBME280();
    initLoRaWAN();
}

void loop() {
    float temp = readTemperature();
    float hum = readHumidity();
    sendDataLoRa(temp, hum);
    delay(10000); // send every 10 seconds
}
