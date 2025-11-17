#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(9,8, 0);

void setup() {
  bar.begin();
}
void lightbarSetup() {
  bar.begin();
}

void lightbarFunction() {

  for (int i=0; i<=10; i++) {

    bar.setLevel(i);
    delay(100);
  }
}