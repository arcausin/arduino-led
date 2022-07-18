/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#define NUM_JOY 2
#define MIN_VAL 0
#define MAX_VAL 1023
const int joyPin [2] = {A0, A1};
const int joyBtn  = 2;
const int joyOffset  = 0;
bool isLightOn = false;

// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13
int increment1 = 0;
void test()
{
  Serial.println(F("Joy Button pressed"));
  // Serial.println(increment1);
  increment1++;
}

void setup()
{
  attachInterrupt(digitalPinToInterrupt(2), test, HIGH);
  // initialize LED digital pin as an output.
  Serial.begin(9600);
  Serial.println(F("Initialize System"));
  pinMode(LED_BUILTIN, OUTPUT);
  for (int i = 0; i < NUM_JOY; i++) pinMode(joyPin[i], INPUT);
}

void loop()
{
  delay(1000);
}

