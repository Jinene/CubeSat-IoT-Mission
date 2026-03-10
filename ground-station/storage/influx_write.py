from influxdb import InfluxDBClient

client = InfluxDBClient(host='localhost', port=8086)
client.switch_database('cubesat_data')

def write_data(data):
    json_body = [
        {
            "measurement": "environment",
            "fields": data
        }
    ]
    client.write_points(json_body)
