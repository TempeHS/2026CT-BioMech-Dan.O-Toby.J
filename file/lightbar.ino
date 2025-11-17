#include <LED_Bar.h>

LED_Bar bar(9,8);

void setup() {}

void loop() {

  for (int i=0; i<=10; i++) {

    bar.setLevel(i);
    delay(100);
  }
}