Components:
arduino uno or any other board 
arduino cable
hc 05 bluetooth module
5v relay  4 channel 
jumper wires
Bulb or any other ac device to be controlled.
Wires
5v power source external







arduino   -   hc 05 connection
rx-pin0        tx pin
tx-pin1        rx pin
gnd             gnd
5v              vcc

Set baudrate of arduino to 9600

arduino   -    5v 4 channel relay module
gnd             gnd
Vin             vcc
pin8            IN1
pin9            IN2
pin10           IN3
pin11           IN4

Note:connect 5v external to power jack of arduino uno board.do not connect 5v of arduio to relays.

Set baudrate of arduino as 9600 in serial monitor.

On the next side of relay module connect the ac connections.
On the ac connection there are two wires ,one is live wire and other is neutral power.
Leave the live wire with the bulb or any connection as it is.(live wire is on right side of plug)
Cut the left wire in between and insert the two cutted joints on middle and its right point which will switch as per relay.

Proceed the same procedure for all 4 connections.
Use any android device with app installes in it.


if any query mail me on vikasmali1498@hotmail.com       