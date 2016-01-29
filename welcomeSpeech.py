//ev3.Sound.speak('Welcome to the OETC 2016 Workshop on Robotics!').wait()
//
//qAndD sample python program on Ev3
//
#!/usr/bin/python

import time

from ev3.rawdevice import motordevice
from ev3.rawdevice import analogdevice
from ev3.rawdevice import uartdevice

from ev3 import lego

motordevice.open_device()
analogdevice.open_device()
uartdevice.open_device() 

A = 0x01
B = 0x02
C = 0x04
D = 0x08

right = A
left = D
both = A+D

touch = lego.EV3TouchSensor(0)
ir = lego.EV3IRSensor(3)
ir.set_prox_mode()

motordevice.speed(both,20)

distance = 101

while True:
  time.sleep(1)
  if touch.is_pressed() == 1:
    motordevice.stop(both, brake=1)
    print "stopping\n"
    break

  cur_distance = ir.get_distance()
  if cur_distance > distance:
    print "searching\n"
    motordevice.stop(both, brake=1)
    motordevice.speed(A, 20)
    time.sleep(1)
    motordevice.stop(A, brake=1)
    motordevice.speed(both,20)

  distance = cur_distance

motordevice.stop(both, brake=1)
