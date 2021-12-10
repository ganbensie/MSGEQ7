bool btnStateMode = 0;

bool stateM = 0;
byte modd = 0;

byte EEmode     =   70;    //Var mode at EEPROM

void updateread() {
  static uint16_t bsm1;
  uint16_t tbsm1 = millis();
  if ((tbsm1 - bsm1) > 100) {
    btnStateMode = digitalRead(11);
    bsm1 = tbsm1;
  }

  if (btnStateMode == HIGH) {
    if (stateM == LOW) {
      modd++;
      EEPROM.write(EEmode, modd);
      stateM = HIGH;

      for (uint16_t i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 0));
      }
      strip.show();
    }
  }
  if (btnStateMode == LOW)      stateM = LOW;

  if (EEPROM.read(EEmode) != 70 ) {
    modd     = EEPROM.read(EEmode);
  }
  if (modd > 12) modd = 0;
  animasi(modd);
//  Serial.print(modd);
//  Serial.println();

}
