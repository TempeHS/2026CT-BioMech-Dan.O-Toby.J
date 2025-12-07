#include <Grove_LED_Bar.h>
Grove_LED_Bar bar(9, 8, 0);
unsigned long startMillis;
unsigned long currentMillis;
unsigned long previousMillis = 0;
int barPower = 0;
const long interval = 100;
int period = 500;
extern bool Incline;

void lightbarSetup() {

  bar.begin();
  bar.setLevel(0);
}

void lightbarIncline() {
  if (Incline == true) {

    currentMillis = millis();

    if (currentMillis - startMillis >= period)

    previousMillis = currentMillis;

    if (barPower == 0) {
      barPower = !barPower;
      bar.setLevel(10, barPower)
      bar.setLevel(9, barPower)
      bar.setLevel(8, barPower)
    } else {
      bar.setLevel(10, 0)
      bar.setLevel(9, 0)
      bar.setLevel(8, 0)
    }

    Incline = false;
    startMillis = currentMillis;
  }
}