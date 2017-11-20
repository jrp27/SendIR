# SendIR
SendIR Library

This library is for blinking an IR LED light to control a Samsung TV. It is specifically tailored to the controls that are needed for the [PPAT Team Dave Arduino TV server](https://github.com/jrp27/ppat-dave-arduino). As a result, it is also specifically designed for the [ESP8266 NodeMCU board](https://www.amazon.com/HiLetgo-Internet-Development-Wireless-Micropython/dp/B010O1G1ES/ref=sr_1_3?ie=UTF8&qid=1511196127&sr=8-3&keywords=esp8266) and must be modified if it needs to work with a different board.

# Usage

To use this library, you must:
1. Install the [Arduino IDE](https://www.arduino.cc/en/Main/Software)
2. Install the [IRRemote library - ESP8266 fork](https://github.com/markszabo/IRremoteESP8266) following the instructions provided in that library's README.
3. Install this library by:
    1. Click "Download ZIP"
    2. Extract the downloaded zip file
    3. Rename the extracted folder to "SendIR"
    4. Move this folder to your Arduino libraries directory (under windows: C:\Users\YOURNAME\Documents\Arduino\libraries)
    5. Restart your Arduino ide
    6. Check out the examples
