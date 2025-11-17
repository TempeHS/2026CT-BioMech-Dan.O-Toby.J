#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(9,8, 0);

unsigned long previousMillis = 0;
const long interval = 100;
int level = 0;



void lightbarSetup() {
  bar.begin();
}

void lightbarFunction() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    bar.setLevel(level);


    level++;
    if (level > 10) {
      level = 0;
    }
  }
}


