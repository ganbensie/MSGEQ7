/*
 *   7 Band WS2812B using chip MSGEQ7 
 *   Tested on Arduino Pro mini
 *   
 *   buy original PCB from Intelligent LED (tokopedia)
 *   
 */
 
#include <Adafruit_NeoPixel.h>
#include <EEPROM.h>

// hardware pin definitions - change to suit circuit MSGEQ7
#include "MSGEQ7.h"
#define pinAnalogLeft  A0
#define pinAnalogRight A0  //  jika ada 2 buah IC MSGEQ7 tambahkan disini jadi A1 misalnya
#define pinStrobe 7   
#define pinReset  5   
#define MSGEQ7_INTERVAL ReadsPerSecond(50)
#define MSGEQ7_SMOOTH true  //false

#define pinLevel A1       //for peak level
#define pinBrightness A2  //brightness

//If you want to smooth the readings with the last reading pass 0-255 as first argument. 
//0 Will disable smoothing, 255 will take 100% of the previous value. 
//191-223 is suggested if smoothing is desired.
//Two MSGEQ7 ICs (stereo), Smoothing disabled (0%)
//contoh : CMSGEQ7<0, 6, 4, A0, A1> MSGEQ7;
CMSGEQ7<MSGEQ7_SMOOTH, pinReset, pinStrobe, pinAnalogLeft, pinAnalogRight> MSGEQ7;

const int PIN = 10;           
const int NUMPIXELS = 56;     

//frequency reading the IC data
int v0, v1, v2, v3, v4, v5, v6, v7;
int freq0, freq1, freq2, freq3, freq4, freq5, freq6, freq7;
int valMax = 1000;
int valMin = 100;
byte speedFade = 50;  // defaul 100, speed
int brightVal;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  MSGEQ7.begin();

  // Serial setup with faster baud rate gives more FPS (115200)
  Serial.begin(115200);
  Serial.println(F("Startup"));
  
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop()
{
  bool newReading = MSGEQ7.read(MSGEQ7_INTERVAL);
  uint16_t FPS = getFPS(newReading);

  // Serial raw debug output
  if (newReading)
    serialBars(FPS);
  
  rainbow();

}

/// FUNCTION UNTUK TEST VIA SERIAL
void serialBars(uint16_t FPS) 
{
  // Visualize the average bass of both channels
  uint8_t input = MSGEQ7.get(MSGEQ7_BASS);

  // Reduce noise
  input = mapNoise(input);

  // Save the difference between the last beat
  static uint8_t lastInput = 0;
  int delta = input - lastInput;
  lastInput = input;

  // All channels together
  Serial.print(input);
  Serial.print(F(" In\t"));

  // Difference between last measurement
  Serial.print(delta);
  Serial.print(F(" D\t"));

  // 1st channel (here: right)
  Serial.print(MSGEQ7.get(MSGEQ7_BASS, 0));
  Serial.print(F(" R\t"));

  Serial.print(MSGEQ7.get(MSGEQ7_0, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_1, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_2, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_3, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_4, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_5, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_6, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_LOW, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_MID, 0));
  Serial.print(F(" \t"));
  Serial.print(MSGEQ7.get(MSGEQ7_HIGH, 0));
  Serial.print(F(" \t"));

  // 2nd channel (here: left)
//  Serial.print(MSGEQ7.get(MSGEQ7_BASS, 1));
//  Serial.print(F(" L\t"));

  // overall volume of all channels
  Serial.print(MSGEQ7.getVolume());
  Serial.print(F(" Vol\t"));

  // FPS of the reading
  Serial.print(FPS);
  Serial.print(F(" FPS \t"));

  //Highlight high pitches
  char c = '=';
  if (delta >= 20)
    c = '#';

  //Visualize with characters as bars
  for (uint8_t i = 0; i < (input / 4); i++)
  {
    if (i == 192 / 4 - 1)
      Serial.print('+');
    else if (i == 128 / 4 - 1)
      Serial.print('*');
    else if (i == 64 / 4 - 1)
      Serial.print('X');
    else
      Serial.print(c);
  }

  valMax = map(analogRead(A1), 0, 1023, 10, 500);
  valMin = valMax/10;

  brightVal = map(analogRead(A2), 0, 1023, 5, 255);

  strip.setBrightness(brightVal);
  // only read every READ_DELAY milliseconds

  freq0 = MSGEQ7.getVolume();
  freq1 = MSGEQ7.get(MSGEQ7_0,0);
  freq2 = MSGEQ7.get(MSGEQ7_1,0);
  freq3 = MSGEQ7.get(MSGEQ7_2,0);
  freq4 = MSGEQ7.get(MSGEQ7_3,0);
  freq5 = MSGEQ7.get(MSGEQ7_4,0);
  freq6 = MSGEQ7.get(MSGEQ7_5,0);
  freq7 = MSGEQ7.get(MSGEQ7_6,0);

//56 leds
///*
  if (freq0 >= valMax) freq0 = valMax;
  if (freq1 >= valMax) freq1 = valMax;
  if (freq2 >= valMax) freq2 = valMax;
  if (freq3 >= valMax) freq3 = valMax;
  if (freq4 >= valMax) freq4 = valMax;
  if (freq5 >= valMax) freq5 = valMax;
  if (freq6 >= valMax) freq6 = valMax;
  if (freq7 >= valMax) freq7 = valMax;

  v0 = map(freq0, valMin, valMax, 0, 8);
  v1 = map(freq1, valMin, valMax, 15, 8);
  v2 = map(freq2, valMin, valMax, 16, 24);
  v3 = map(freq3, valMin, valMax, 31, 24);
  v4 = map(freq4, valMin, valMax, 32, 40);
  v5 = map(freq5, valMin, valMax, 47, 40);
  v6 = map(freq6, valMin, valMax, 48, 56);
  v7 = map(freq7, valMin, valMax, 63, 56);
//*/

  Serial.print(valMax);
  Serial.print("\t");
  Serial.print(brightVal);
  Serial.print("\t");

  updateread();

  //pilih animasi 0-12
  animasi(0);

  //for clear led
  wipeOff0(v0, speedFade);
  wipeOff1(v1, speedFade);
  wipeOff2(v2, speedFade);
  wipeOff3(v3, speedFade);
  wipeOff4(v4, speedFade);
  wipeOff5(v5, speedFade);
  wipeOff6(v6, speedFade);
  wipeOff7(v7, speedFade);
  
  Serial.println();

}

uint16_t getFPS(bool newReading) {
  //Variables to count FPS and last 1 second mark
  static uint16_t prevFPS = 0;
  static uint16_t FPS = 0;
  static uint32_t m = 0;

  //Increase FPS count
  if (newReading)
    FPS++;

  //If 1 second mark crossed, save new FPS
  if ((micros() - m) > 1000000) {
    prevFPS = FPS;
    FPS = 0;
    m = micros();
  }

  return prevFPS;
}


void colorWipe(uint32_t c, uint8_t wait) 
{
  for (uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
  }
  delay(wait);
}

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
    WheelPos -= 170;
    return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}
