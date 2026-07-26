import serial

PORT = "/dev/ttyUSB0"      # Change if required
BAUD = 115200

ser = serial.Serial(PORT, BAUD, timeout=1)

print("===================================")
print(" Warehouse Rover Teleop Controller ")
print("===================================")
print("F  -> Forward")
print("B  -> Backward")
print("TL -> Tank Left")
print("TR -> Tank Right")
print("PL -> Pivot Left")
print("PR -> Pivot Right")
print("CL -> Curve Left")
print("CR -> Curve Right")
print("S  -> Stop")
print("Q  -> Quit")

while True:

    cmd = input("Command : ").upper()

    if cmd == "Q":
        break

    ser.write((cmd + "\n").encode())

ser.close()
