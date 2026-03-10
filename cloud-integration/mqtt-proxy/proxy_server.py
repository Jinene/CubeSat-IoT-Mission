import paho.mqtt.client as mqtt
import json
from auth_config import MQTT_USER, MQTT_PASS

client = mqtt.Client()
client.username_pw_set(MQTT_USER, MQTT_PASS)
client.connect("mqtt.tunisia.example.com", 1883)

def publish_data(data):
    payload = json.dumps(data)
    client.publish("cubesat/telemetry", payload)
