import serial
a = serial.Serial("COM6", 9600)
while True:
    pot = str(a.readline())
    print(pot[2:-3])
a.close()
