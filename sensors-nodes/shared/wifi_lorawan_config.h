#ifndef WIFI_LORAWAN_CONFIG_H
#define WIFI_LORAWAN_CONFIG_H

#define LORA_SSID "CubeSatNode"
#define LORA_PASSWORD "SecurePassword123"
#define LORA_SERVER "192.168.1.100"
#define LORA_PORT 1883

void initLoRaWAN() {
    // Initialize LoRa or Wi-Fi connection
}

void sendDataLoRa(float value1, float value2=0) {
    // Send data over LoRa/WiFi
}

#endif
