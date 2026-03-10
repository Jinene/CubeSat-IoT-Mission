import unittest
from decode_packets import decode_packet

class TestFullPipeline(unittest.TestCase):
    def test_decode(self):
        raw = (int(25*100)).to_bytes(4, 'little') + \
              (int(50*100)).to_bytes(4, 'little') + \
              (int(12.5*100)).to_bytes(4, 'little')
        data = decode_packet(raw)
        self.assertAlmostEqual(data["temperature"], 25)
        self.assertAlmostEqual(data["humidity"], 50)
        self.assertAlmostEqual(data["pm25"], 12.5)

if __name__ == "__main__":
    unittest.main()
