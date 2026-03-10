from rtlsdr import RtlSdr

class SDRReceiver:
    def __init__(self):
        self.sdr = RtlSdr()
        self.sdr.sample_rate = 2.4e6
        self.sdr.gain = 'auto'

    def read_samples(self, num_samples=256*1024):
        return self.sdr.read_samples(num_samples)

    def close(self):
        self.sdr.close()
