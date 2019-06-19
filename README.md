This is to program an Arduino Nano with a program that reads the smt172 sensor and sends it to a raspberry pi
The install script is meant to be run on a raspberry pi like this:
wget -O - https://raw.githubusercontent.com/nrbrt/smt172-nano/master/install.sh | sh

This will program the nano, that needs to be connected at that moment, without any user interaction and is meant for novice users
and easy installation.

The smt172 sensor needs to be connected to pin 8 and needs a small circuit as shown in the connection diagram picture.
This sketch uses the great smt172 library and connection diagram picture by Edwin Croissant.