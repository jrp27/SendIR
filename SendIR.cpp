#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <Arduino.h>
#include "SendIR.h"

// to update this library, the line in each function that looks like irsend.sendSAMSUNG(...) should be updated
// the first parameter is the code (found when scanning codes from the remote), the second parameter is the
// number of bits of the code (also found when scanning codes from the remote), and the third parameter is
// the number of times the signal should be repeated. For example, if the 3rd parameter is 2, the signal will be
// sent 3 times because one original time and 2 repeats.

SendIR::SendIR() {
}

void SendIR::sendPower() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E040BF, 32, 2);
	delay(40);
}

void SendIR::sendChannelUp() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E048B7, 32, 2);
	delay(40);
}

void SendIR::sendChannelDown() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E008F7, 32, 2);
	delay(40);
}

void SendIR::sendVolumeUp() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E0E01F, 32, 1);
	delay(100);
}

void SendIR::sendVolumeDown() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E0D02F, 32, 1);
	delay(100);
}

void SendIR::send1() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E020DF, 32, 1);
	delay(40);
}

void SendIR::send2() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E0A05F, 32, 1);
	delay(40);
}

void SendIR::send3() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E0609F, 32, 1);
	delay(40);
}

void SendIR::send4() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E010EF, 32, 1);
	delay(40);
}

void SendIR::send5() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E0906F, 32, 1);
	delay(40);
}

void SendIR::send6() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E050AF, 32, 1);
	delay(40);
}

void SendIR::send7() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E030CF, 32, 1);
	delay(40);
}

void SendIR::send8() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E0B04F, 32, 1);
	delay(40);
}

void SendIR::send9() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E0708F, 32, 1);
	delay(40);
}

void SendIR::send0() {
	IRsend irsend(4);
	irsend.begin();
	irsend.sendSAMSUNG(0xE0E08877, 32, 1);
	delay(40);
}
