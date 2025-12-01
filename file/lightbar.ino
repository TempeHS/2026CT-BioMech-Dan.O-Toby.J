#include <Grove_LED_Bar.h>
Grove_LED_Bar bar(9, 8, 0);

unsigned long previousMillis = 0;
const long interval = 100;
int level = 0;
extern bool Incline;

void lightbarSetup() {

  bar.begin();
  bar.setLevel(0);
}


void lightbarIncline() {
  if (Incline == true) {

    for (int i = 0; i <= 6; i++) {
      bar.setLed(8, 1);
      bar.setLed(9, 1);
      bar.setLed(10, 1);
      delay(300);
      bar.setLed(8, 0);
      bar.setLed(9, 0);
      bar.setLed(10, 0);
    }
    Incline = false;
  }
}