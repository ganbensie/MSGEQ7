uint16_t CT;
static uint16_t Cw;
static uint16_t Cz;

void animasi(byte modee) {
  switch (modee) {
    case 0 :
      rainbow();
      strip.show();
      break;
      
    case 1 :
      rainbow();
      strip.show();
      cylonOff0(v0, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff1(v1, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff2(v2, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff3(v3, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff4(v4, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff5(v5, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff6(v6, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff7(v7, 0, strip.Color(150, 150, 150), speedFade * 4);
      break;
      
    case 2 ://
      rainbowBar();
      strip.show();
      break;
      
    case 3 ://
      rainbowBar();
      strip.show();
      cylonOff0(v0, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff1(v1, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff2(v2, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff3(v3, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff4(v4, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff5(v5, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff6(v6, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff7(v7, 0, strip.Color(150, 150, 150), speedFade * 4);
      break;
      
    case 4 :
      CT = millis();
      if ((CT - Cw) > 30) {
        Cw = CT;
        Cz++;
        if (Cz >= 255)
        {
          Cz = 0;
        }
      }
      colorBar(Wheel(((Cz)) & 255));
      strip.show();
      break;
      
    case 5 :
      CT = millis();
      if ((CT - Cw) > 30) {
        Cw = CT;
        Cz++;
        if (Cz >= 255)
        {
          Cz = 0;
        }
      }
      colorBar(Wheel(((Cz)) & 255));
      strip.show();
      cylonOff0(v0, 0, Wheel(((Cz)) & 255), speedFade * 4);
      cylonOff1(v1, 0, Wheel(((Cz)) & 255), speedFade * 4);
      cylonOff2(v2, 0, Wheel(((Cz)) & 255), speedFade * 4);
      cylonOff3(v3, 0, Wheel(((Cz)) & 255), speedFade * 4);
      cylonOff4(v4, 0, Wheel(((Cz)) & 255), speedFade * 4);
      cylonOff5(v5, 0, Wheel(((Cz)) & 255), speedFade * 4);
      cylonOff6(v6, 0, Wheel(((Cz)) & 255), speedFade * 4);
      cylonOff7(v7, 0, Wheel(((Cz)) & 255), speedFade * 4);
      break;
      
    case 6 :
      CT = millis();
      if ((CT - Cw) > 30) {
        Cw = CT;
        Cz++;
        if (Cz >= 255)
        {
          Cz = 0;
        }
      }
      colorBar(Wheel(((Cz)) & 255));
      strip.show();
      cylonOff0(v0, 1, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff1(v1, 1, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff2(v2, 1, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff3(v3, 1, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff4(v4, 1, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff5(v5, 1, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff6(v6, 1, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff7(v7, 1, strip.Color(150, 150, 150), speedFade * 4);
      break;
      
    case 7 :
      CT = millis();
      if ((CT - Cw) > 30) {
        Cw = CT;
        Cz++;
        if (Cz >= 255)
        {
          Cz = 0;
        }
      }
      colorBar(Wheel(((Cz)) & 255));
      strip.show();
      cylonOff0(v0, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff1(v1, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff2(v2, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff3(v3, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff4(v4, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff5(v5, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff6(v6, 0, strip.Color(150, 150, 150), speedFade * 4);
      cylonOff7(v7, 0, strip.Color(150, 150, 150), speedFade * 4);
      break;
      
    case 8 ://
      colorBar(strip.Color(255, 0, 0));
      strip.show();
      break;
      
    case 9 ://
      colorBar(strip.Color(255, 0, 0));
      strip.show();
      cylonOff0(v0, 0, strip.Color(0, 0, 150), speedFade * 4);
      cylonOff1(v1, 0, strip.Color(0, 0, 150), speedFade * 4);
      cylonOff2(v2, 0, strip.Color(0, 0, 150), speedFade * 4);
      cylonOff3(v3, 0, strip.Color(0, 0, 150), speedFade * 4);
      cylonOff4(v4, 0, strip.Color(0, 0, 150), speedFade * 4);
      cylonOff5(v5, 0, strip.Color(0, 0, 150), speedFade * 4);
      cylonOff6(v6, 0, strip.Color(0, 0, 150), speedFade * 4);
      cylonOff7(v7, 0, strip.Color(0,0, 150), speedFade * 4);
      break;
      
    case 10 ://
      colorBar(strip.Color(0, 200, 100));
      strip.show();
      break;
      
    case 11 ://
      colorBar(strip.Color(200, 200, 200));
      strip.show();
      cylonOff0(v0, 0, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff1(v1, 0, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff2(v2, 0, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff3(v3, 0, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff4(v4, 0, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff5(v5, 0, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff6(v6, 0, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff7(v7, 0, strip.Color(150, 0, 0), speedFade * 4);
      break;
      
    case 12 ://
      colorBar(strip.Color(200, 200, 200));
      strip.show();
      cylonOff0(v0, 1, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff1(v1, 1, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff2(v2, 1, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff3(v3, 1, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff4(v4, 1, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff5(v5, 1, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff6(v6, 1, strip.Color(150, 0, 0), speedFade * 4);
      cylonOff7(v7, 1, strip.Color(150, 0, 0), speedFade * 4);
      break;
  }
}
