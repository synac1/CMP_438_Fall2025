import time
from time import sleep
from machine import Pin

button = Pin(16, Pin.IN, Pin.PULL_UP)

led = Pin(9, Pin.OUT)

while True:
    if button.value() == 0:   # button pressed
        led.on()        # turn LED on
        time.sleep(0.1)
    else:
        led.off()        # turn LED off
        time.sleep(0.1)
  
