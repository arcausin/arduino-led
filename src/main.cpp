#include "Arduino.h"
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pinCS = 10; 
//Din connects to pin 11
//CLK connects to pin 13

int numberOfHorizontalDisplays = 1;
int numberOfVerticalDisplays = 1;

Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);

const unsigned char PROGMEM smiley[] = {
  B00000000,
  B01000010,
  B00000000,
  B00011000,
  B10000001,
  B01000010,
  B00111100,
  B00000000
};

void setup() {
  matrix.setIntensity(10);
}

void loop() {
  matrix.drawBitmap(0, 0, smiley, 8, 8, HIGH);
  matrix.write();
}