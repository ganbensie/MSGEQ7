void rainbow() {
  for (byte i = 0; i < v0; i++) {
    strip.setPixelColor(i, Wheel(((i * 256 / 8)) & 255));
  }
  for (byte i = 15; i > v1; i--) {
    strip.setPixelColor(i, Wheel((((15 - i) * 256 / 8)) & 255));
  }
  for (byte i = 16; i < v2; i++) {
    strip.setPixelColor(i, Wheel((((i - 16) * 256 / 8)) & 255));
  }
  for (byte i = 31; i > v3; i--) {
    strip.setPixelColor(i, Wheel((((31 - i) * 256 / 8)) & 255));
  }
  for (byte i = 32; i < v4; i++) {
    strip.setPixelColor(i, Wheel((((i - 32) * 256 / 8)) & 255));
  }
  for (byte i = 47; i > v5; i--) {
    strip.setPixelColor(i, Wheel((((47 - i) * 256 / 8)) & 255));
  }
  for (byte i = 48; i < v6; i++) {
    strip.setPixelColor(i, Wheel((((i - 48) * 256 / 8)) & 255));
  }
  for (byte i = 63; i > v7; i--) {
    strip.setPixelColor(i, Wheel((((63 - i) * 256 / 8)) & 255));
  }
}

void rainbowBar(){
   for (byte i = 0; i < v0; i++) {
    strip.setPixelColor(i, Wheel(((4 * 256 / 8)) & 255)); //red
  }
  for (byte i = 15; i > v1; i--) {
    strip.setPixelColor(i, Wheel((((5) * 256 / 8)) & 255));
  }
  for (byte i = 16; i < v2; i++) {
    strip.setPixelColor(i, Wheel((((6) * 256 / 8)) & 255));
  }
  for (byte i = 31; i > v3; i--) {
    strip.setPixelColor(i, Wheel((((7) * 256 / 8)) & 255));
  }
  for (byte i = 32; i < v4; i++) {
    strip.setPixelColor(i, Wheel((((8) * 256 / 8)) & 255));
  }
  for (byte i = 47; i > v5; i--) {
    strip.setPixelColor(i, Wheel((((1) * 256 / 8)) & 255));
  }
  for (byte i = 48; i < v6; i++) {
    strip.setPixelColor(i, Wheel((((2) * 256 / 8)) & 255));
  }
  for (byte i = 63; i > v7; i--) {
    strip.setPixelColor(i, Wheel((((3) * 256 / 8)) & 255));
  }
}

void colorBar(uint32_t c){
   for (byte i = 0; i < v0; i++) {
    strip.setPixelColor(i, c); //red
  }
  for (byte i = 15; i > v1; i--) {
    strip.setPixelColor(i, c);
  }
  for (byte i = 16; i < v2; i++) {
    strip.setPixelColor(i, c);
  }
  for (byte i = 31; i > v3; i--) {
    strip.setPixelColor(i, c);
  }
  for (byte i = 32; i < v4; i++) {
    strip.setPixelColor(i, c);
  }
  for (byte i = 47; i > v5; i--) {
    strip.setPixelColor(i, c);
  }
  for (byte i = 48; i < v6; i++) {
    strip.setPixelColor(i, c);
  }
  for (byte i = 63; i > v7; i--) {
    strip.setPixelColor(i, c);
  }
}
