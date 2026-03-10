import matplotlib.pyplot as plt

def update_dashboard(data):
    plt.clf()
    plt.bar(['Temperature','Humidity','PM2.5'], [data['temperature'], data['humidity'], data['pm25']])
    plt.pause(0.01)
