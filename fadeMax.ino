byte Cvalue = 0;

void cylonOff0(int Cval, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr = millis();
  static uint16_t Cwkt;
  static uint16_t Cx;

  if ((Cval > (Cvalue - Cx))) {
    Cx = 0;
    Cvalue = Cval + 1;
  }
  if ((CTmr - Cwkt) > SpeedDelay) {
    Cwkt = CTmr;
    Cx++;
    if (Cx >= Cvalue)
    {
      Cx = 0;
      Cvalue = 0;
    }
  }
  byte Cxx = Cvalue - Cx;
  if (Cxx >= 7) Cxx = 7;
  if (rainbow == true) strip.setPixelColor(Cxx, Wheel(((4 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  if (rainbow == false) strip.setPixelColor(Cxx, c);
  strip.setPixelColor(Cxx + 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  //  strip.show();                          //  Update st
}


byte Cvalue1 = 15;

void cylonOff1(int Cval1, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr1 = millis();
  static uint16_t Cwkt1;
  static uint16_t Cx1;

  if ((Cval1 < (Cvalue1 + Cx1))) {
    Cx1 = 0;
    Cvalue1 = Cval1 - 1;
  }
  if ((CTmr1 - Cwkt1) > SpeedDelay) {
    Cwkt1 = CTmr1;
    Cx1++;
    if (Cx1 >= 15 - Cvalue1)
    {
      Cx1 = 0;
      Cvalue1 = 15;
    }
  }
  byte Cxx1 = Cvalue1 + Cx1;
  if (Cxx1 <= 8) Cxx1 = 8;
  if (Cxx1 >= 14){
    Cxx1 = 15;
    strip.setPixelColor(15, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  }
  if (rainbow == true) {
    strip.setPixelColor(Cxx1, Wheel(((5 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  }
  if (rainbow == false) {
    strip.setPixelColor(Cxx1, c);
  }
  strip.setPixelColor(Cxx1 - 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)

  //    strip.show();                          //  Update st
}

byte Cvalue2 = 16;

void cylonOff2(int Cval2, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr2 = millis();
  static uint16_t Cwkt2;
  static uint16_t Cx2;

  if ((Cval2 > (Cvalue2 - Cx2))) {
    Cx2 = 0;
    Cvalue2 = Cval2 + 1;
  }
  if ((CTmr2 - Cwkt2) > SpeedDelay) {
    Cwkt2 = CTmr2;
    Cx2++;
    if (Cx2 >= Cvalue2 - 16)
    {
      Cx2 = 0;
      Cvalue2 = 16;
    }
  }
  byte Cxx2 = Cvalue2 - Cx2;
  if (Cxx2 >= 23) Cxx2 = 23;
  if (Cxx2 <= 17){
    Cxx2 = 16;
    strip.setPixelColor(16, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  }
  if (rainbow == true) strip.setPixelColor(Cxx2, Wheel(((6 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  if (rainbow == false) strip.setPixelColor(Cxx2, c); //  Set pixel's color (in RAM)
  strip.setPixelColor(Cxx2 + 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  //  strip.show();                          //  Update st
}


byte Cvalue3 = 31;

void cylonOff3(int Cval3, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr3 = millis();
  static uint16_t Cwkt3;
  static uint16_t Cx3;

  if ((Cval3 < (Cvalue3 + Cx3))) {
    Cx3 = 0;
    Cvalue3 = Cval3 - 1;
  }
  if ((CTmr3 - Cwkt3) > SpeedDelay) {
    Cwkt3 = CTmr3;
    Cx3++;
    if (Cx3 >= 31 - Cvalue3)
    {
      Cx3 = 0;
      Cvalue3 = 31;
    }
  }
  byte Cxx3 = Cvalue3 + Cx3;
  if (Cxx3 <= 24) Cxx3 = 24;
  if (Cxx3 >= 30){
    Cxx3 = 31;
    strip.setPixelColor(31, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  }
  if (rainbow == true) strip.setPixelColor(Cxx3, Wheel(((7 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  if (rainbow == false) strip.setPixelColor(Cxx3, c); //  Set pixel's color (in RAM)
  strip.setPixelColor(Cxx3 - 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  //  strip.show();                          //  Update st
}


byte Cvalue4 = 32;

void cylonOff4(int Cval4, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr4 = millis();
  static uint16_t Cwkt4;
  static uint16_t Cx4;

  if ((Cval4 > (Cvalue4 - Cx4))) {
    Cx4 = 0;
    Cvalue4 = Cval4 + 1;
  }
  if ((CTmr4 - Cwkt4) > SpeedDelay) {
    Cwkt4 = CTmr4;
    Cx4++;
    if (Cx4 >= Cvalue4 - 32)
    {
      Cx4 = 0;
      Cvalue4 = 32;
    }
  }
  byte Cxx4 = Cvalue4 - Cx4;
  if (Cxx4 >= 39) Cxx4 = 39;
  if (Cxx4 <= 33){
    Cxx4 = 32;
    strip.setPixelColor(32, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  }
  if (rainbow == true)  strip.setPixelColor(Cxx4, Wheel(((8 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  if (rainbow == false)  strip.setPixelColor(Cxx4, c); //  Set pixel's color (in RAM)
  strip.setPixelColor(Cxx4 + 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  //  strip.show();                          //  Update st
}


byte Cvalue5 = 47;

void cylonOff5(int Cval5, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr5 = millis();
  static uint16_t Cwkt5;
  static uint16_t Cx5;

  if ((Cval5 < (Cvalue5 + Cx5))) {
    Cx5 = 0;
    Cvalue5 = Cval5 - 1;
  }
  if ((CTmr5 - Cwkt5) > SpeedDelay) {
    Cwkt5 = CTmr5;
    Cx5++;
    if (Cx5 >= 47 - Cvalue5)
    {
      Cx5 = 0;
      Cvalue5 = 47;
    }
  }
  byte Cxx5 = Cvalue5 + Cx5;
  if (Cxx5 <= 40) Cxx5 = 40;
  if (Cxx5 >= 46){
    Cxx5 = 47;
    strip.setPixelColor(47, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  }
  if (rainbow == true) strip.setPixelColor(Cxx5, Wheel(((1 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  if (rainbow == false) strip.setPixelColor(Cxx5, c); //  Set pixel's color (in RAM)
  strip.setPixelColor(Cxx5 - 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  //  strip.show();                          //  Update st
}


byte Cvalue6 = 48;

void cylonOff6(int Cval6, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr6 = millis();
  static uint16_t Cwkt6;
  static uint16_t Cx6;

  if ((Cval6 > (Cvalue6 - Cx6))) {
    Cx6 = 0;
    Cvalue6 = Cval6 + 1;
  }
  if ((CTmr6 - Cwkt6) > SpeedDelay) {
    Cwkt6 = CTmr6;
    Cx6++;
    if (Cx6 >= Cvalue6-48)
    {
      Cx6 = 0;
      Cvalue6 = 48;
    }
  }
  byte Cxx6 = Cvalue6 - Cx6;
  if (Cxx6 >= 55) Cxx6 = 55;
  if (Cxx6 <= 49){
    Cxx6 = 48;
    strip.setPixelColor(48, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  }
  if (rainbow == true)  strip.setPixelColor(Cxx6, Wheel(((2 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  if (rainbow == false)  strip.setPixelColor(Cxx6, c); //  Set pixel's color (in RAM)
  strip.setPixelColor(Cxx6 + 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  //  strip.show();                          //  Update st
}

byte Cvalue7 = 63;

void cylonOff7(int Cval7, bool rainbow, uint32_t c, int SpeedDelay) {
  uint16_t CTmr7 = millis();
  static uint16_t Cwkt7;
  static uint16_t Cx7;

  if ((Cval7< (Cvalue7 + Cx7))) {
    Cx7 = 0;
    Cvalue7 = Cval7 - 1;
  }
  if ((CTmr7 - Cwkt7) > SpeedDelay) {
    Cwkt7 = CTmr7;
    Cx7++;
    if (Cx7 >= 63 - Cvalue7)
    {
      Cx7 = 0;
      Cvalue7 = 63;
    }
  }
  byte Cxx7 = Cvalue7 + Cx7;
  if (Cxx7 <= 56) Cxx7 = 56;
  if (Cxx7 >= 62){
    Cxx7 = 63;
    strip.setPixelColor(63, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  }
  if (rainbow == true) strip.setPixelColor(Cxx7, Wheel(((1 * 256 / 8)) & 255)); //  Set pixel's color (in RAM)
  if (rainbow == false) strip.setPixelColor(Cxx7, c); //  Set pixel's color (in RAM)
  strip.setPixelColor(Cxx7 - 1, strip.Color(0, 0, 0)); //  Set pixel's color (in RAM)
  //  strip.show();                          //  Update st
}
