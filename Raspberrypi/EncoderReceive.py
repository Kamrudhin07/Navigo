import serial

PORT="/dev/ttyUSB0"
BAUD=115200

ser=serial.Serial(PORT,BAUD)

print("Encoder Receiver Started\n")

while True:

    data=ser.readline().decode().strip()

    if data.startswith("<") and data.endswith(">"):

        data=data[1:-1]

        try:
            fl,fr,rl,rr=map(int,data.split(","))

            print("--------------------------------")

            print("Front Left :",fl)
            print("Front Right:",fr)
            print("Rear Left  :",rl)
            print("Rear Right :",rr)

        except:
            pass
