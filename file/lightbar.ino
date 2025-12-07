#include <Grove_LED_Bar.h>
Grove_LED_Bar bar(9, 8, 0);
unsigned long startMillis;
unsigned long currentMillis;
unsigned long previousMillis = 0;
bool ledState = false;
const long interval = 100;
int period = 100;
extern bool Incline;

void lightbarSetup() {

  bar.begin();
  bar.setLevel(0);
}

void lightbarIncline() {
  if (Incline) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= period) {
      previousMillis = currentMillis;
      ledState = !ledState;

      bar.setLed(8, ledState);
      bar.setLed(9, ledState);
      bar.setLed(10, ledState);
    }
  } else {
    bar.setLed(8, 0);
    bar.setLed(9, 0);
    bar.setLed(10, 0);
  }
}