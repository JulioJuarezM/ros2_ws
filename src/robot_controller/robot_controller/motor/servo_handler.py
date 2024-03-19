#!/usr/bin/env python
from pydxl import Mx28, SerialLink
from pydxl import Mx28, SerialLink

u2d2 = SerialLink(
    device="/dev/ttyUSB0", baudrate=1_000_000, protocol_version=1.0
)

tilt = Mx28(identifier=1, serial_link=u2d2)
pan = Mx28(identifier=2, serial_link=u2d2)

def servoLed(position):
    try:
      screenPosition = position.split('-')
      x_pos = float(screenPosition[0])
      y_pos = screenPosition[1]
      # print('X position: "%s"  Y position: "%s"' % (x_pos, y_pos))
      # pan_presentPosition = tilt.present_position
      # tilt_presentPosition = pan.present_position
      # # print('Pan position: "%s"  Tils position: "%s"' % (pan_presentPosition, tilt_presentPosition))

      if x_pos > 300 and x_pos < 240:
        print('DONT MOVE    -  X: "%s"  Y: "%s"' % (x_pos, y_pos))
      if x_pos < 300:
        print('Move left    -  X: "%s"  Y: "%s"' % (x_pos, y_pos))
      if x_pos > 240:
        print('Move Rigth   -  X: "%s"  Y: "%s"' % (x_pos, y_pos))


    except NameError:
      print(NameError)
#   _position = int(position)
#   if _position > 700: 
#     if _position < 300:
#       print(_position)
#       servo1.led = True
#       servo1.goal_position = _position
#       print('hello')