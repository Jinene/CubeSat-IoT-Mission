# CubeSat-IoT-Mission

**Professional Multi-Node CubeSat IoT Mission for Environmental Monitoring (Tunisia Example)**

---

## Mission Overview
This mission simulates a CubeSat IoT system for monitoring multiple environmental parameters across Tunisia. The system consists of:

1. **Satellite Firmware**: Collects telemetry data from multiple sensor nodes.
2. **Sensor Nodes**: Distributed IoT sensors for temperature, humidity, and air quality.
3. **Ground Station**: Receives data using SDR/LoRa and decodes telemetry.
4. **Cloud Integration**: Stores telemetry in InfluxDB and visualizes in Grafana.
5. **Testing Suite**: Unit and integration tests for mission-critical code.

---

## Tech Stack
- Firmware: C (STM32 HAL, FreeRTOS stubs)
- Sensor Nodes: C++ / Arduino
- Ground Station: Python / RTL-SDR / LoRa
- Cloud: Python / MQTT / InfluxDB / Grafana
- Protocol: CubeSat Space Protocol (CSP), TLV packet encoding

---

## Folder Structure
Refer to the repo structure above.

---

## License
MIT License
