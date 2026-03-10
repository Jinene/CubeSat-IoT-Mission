def decode_packet(raw):
    temp = int.from_bytes(raw[0:4], 'little') / 100
    hum  = int.from_bytes(raw[4:8], 'little') / 100
    pm25 = int.from_bytes(raw[8:12], 'little') / 100
    return {"temperature": temp, "humidity": hum, "pm25": pm25}
