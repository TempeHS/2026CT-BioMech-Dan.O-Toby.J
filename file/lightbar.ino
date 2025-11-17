#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(9,8, 0);

unsigned long previousMillis = 0;
const long interval = 1000;



void lightbarSetup() {
  bar.begin();
}

void lightbarFunction() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    for (int i=0; i<=10; i++) {

      bar.setLevel(i);
      delay(100);
    }
  }
}
