import matplotlib.pyplot as plt

def display_dashboard(data_list):
    plt.ion()
    for data in data_list:
        plt.clf()
        plt.bar(['Temp','Hum','PM2.5'], [data['temperature'], data['humidity'], data['pm25']])
        plt.pause(0.5)
