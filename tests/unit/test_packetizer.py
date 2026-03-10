import unittest
from comms import build_packet
from sensors import sensor_data_t

class TestPacketizer(unittest.TestCase):
    def test_packet_length(self):
        data = sensor_data_t(25.0, 50.0, 12.5)
        packet = bytearray(128)
        length = build_packet(data, packet)
        self.assertEqual(length, 12)

if __name__ == "__main__":
    unittest.main()
