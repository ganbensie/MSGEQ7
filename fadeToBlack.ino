byte value = 0;

void wipeOff0(int val, int SpeedDelay) {
  uint16_t Tmr = millis();
  static uint16_t wkt;
  static uint16_t x;
  
  if ((val > (value - x))) {
    x = 0;
    value = val;// + 1;
  }
  if ((Tmr - wkt) > SpeedDelay) {
    wkt = Tmr;
    x++;
    if (x >= value)
    {
      x = 0;
      value = 0;
    }
  }
  strip.setPixelColor(value - x, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print("x : ");
  //  Serial.print(value - x);
  //  Serial.print("\t");
}

byte value1 = 0;

void wipeOff1(int val1, int SpeedDelay) {
  uint16_t Tmr1 = millis();
  static uint16_t wkt1;
  static uint16_t x1;
  if (val1 < (value1 + x1)) {
    x1 = 0;
    value1 = val1 ;//- 1;
  }
  else value1 = value1;
  if ((Tmr1 - wkt1) > SpeedDelay) {
    wkt1 = Tmr1;
    x1++;
    if (x1 >= (value1))
    {
      x1 = 0;
      value1 = 9;
    }
  }
  
  strip.setPixelColor(value1 + x1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)  //default
  //strip.setPixelColor(48 + value1 + x1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print("x1 : ");
  //  Serial.print(value1 + x1);
  //  Serial.print("\t");
}

byte value2 = 0;

void wipeOff2(int val2, int SpeedDelay) {
  uint16_t Tmr2 = millis();
  static uint16_t wkt2;
  static uint16_t x2;
  if (val2 > (value2 - x2)) {
    x2 = 0;
    value2 = val2;// + 1;
  }
  else value2 = value2;
  if ((Tmr2 - wkt2) > SpeedDelay) {
    wkt2 = Tmr2;
    x2++;
    if (x2 >= value2)
    {
      x2 = 0;
      value2 = 15;
    }
  }
  strip.setPixelColor(value2 - x2, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print("  x2 : ");
  //  Serial.print(value2 - x2);
  //  Serial.print("\t");
}

byte value3 = 0;

void wipeOff3(int val3, int SpeedDelay) {
  uint16_t Tmr3 = millis();
  static uint16_t wkt3;
  static uint16_t x3;
  if (val3 < (value3 + x3)) {
    x3 = 0;
    value3 = val3;// - 1;
  }
  else value3 = value3;
  if ((Tmr3 - wkt3) > SpeedDelay) {
    wkt3 = Tmr3;
    x3++;
    if (x3 >= (value3))
    {
      x3 = 0;
      value3 = 24;
    }
  }
  strip.setPixelColor(value3 + x3, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print(" x3 : ");
  //  Serial.print(value3 + x3);
  //  Serial.print("\t");
}

byte value4 = 0;

void wipeOff4(int val4, int SpeedDelay) {
  uint16_t Tmr4 = millis();
  static uint16_t wkt4;
  static uint16_t x4;
  if (val4 > (value4 - x4)) {
    x4 = 0;
    value4 = val4;// + 1;
  }
  else value4 = value4;
  if ((Tmr4 - wkt4) > SpeedDelay) {
    wkt4 = Tmr4;
    x4++;
    if (x4 >= value4)
    {
      x4 = 0;
      value4 = 31;
    }
  }
  strip.setPixelColor(value4 - x4, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print("  x4 : ");
  //  Serial.print(value4 - x4);
  //  Serial.print("\t");
}

byte value5 = 0;

void wipeOff5(int val5, int SpeedDelay) {
  uint16_t Tmr5 = millis();
  static uint16_t wkt5;
  static uint16_t x5;
  if (val5 < (value5 + x5)) {
    x5 = 0;
    value5 = val5;// - 1;
  }
  else value5 = value5;
  if ((Tmr5 - wkt5) > SpeedDelay) {
    wkt5 = Tmr5;
    x5++;
    if (x5 >= (value5))
    {
      x5 = 0;
      value5 = 40;
    }
  }
  strip.setPixelColor(value5 + x5, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print(" x5 : ");
  //  Serial.print(value5 + x5);
  //  Serial.print("\t");
}

byte value6 = 0;

void wipeOff6(int val6, int SpeedDelay) {
  uint16_t Tmr6 = millis();
  static uint16_t wkt6;
  static uint16_t x6;
  if (val6 > (value6 - x6)) {
    x6 = 0;
    value6 = val6 ;//+ 1;
  }
  else value6 = value6;
  if ((Tmr6 - wkt6) > SpeedDelay) {
    wkt6 = Tmr6;
    x6++;
    if (x6 >= value6)
    {
      x6 = 0;
      value6 = 47;
    }
  }
  strip.setPixelColor(value6 - x6, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print("  x6 : ");
  //  Serial.print(value6 - x6);
  //  Serial.print("\t");
}

byte value7 = 0;

void wipeOff7(int val7, int SpeedDelay) {
  uint16_t Tmr7 = millis();
  static uint16_t wkt7;
  static uint16_t x7;
  if (val7 < (value7 + x7)) {
    x7 = 0;
    value7 = val7;// - 1;
  }
  else value7 = value7;
  if ((Tmr7 - wkt7) > SpeedDelay) {
    wkt7 = Tmr7;
    x7++;
    if (x7 >= (value7))
    {
      x7 = 0;
      value7 = 56;
    }
  }
  strip.setPixelColor(value7 + x7, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  strip.show();                          //  Update st
  //  Serial.print(" x5 : ");
  //  Serial.print(value5 + x5);
  //  Serial.print("\t");
}
