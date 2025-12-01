Libraries used: 

Grove LED Bar by Seeed Studio

Version: 1.0.0

1/12/25: Fixed the detection of Incline coming from ultrasonic.ino

Grove LED Bar Documentation:

https://wiki.seeedstudio.com/Grove-LED_Bar/ 

Plug into D8

'''bar.setLevel(1-9)

Once the system detects that Incline is equal to true (defined in Ultrasonic.ino)

It makes the three ights at the top of the lightbar (10,9,8) light up and flash


'''
bar.setLed(10, 1);
'''

This line is usd to set if a specific light (1-10) is on or off (1/0)





