#include <Grove_LED_Bar.h>
Grove_LED_Bar bar(9,8, 0);

unsigned long previousMillis = 0;
const long interval = 100;
int level = 0;
extern bool Incline;

void lightbarSetup(){

   bar.begin();


}


void lightbarIncline() {
   while (Incline == true) {

    bar.setLed(8, 1);
    bar.setLed(9, 1);
    bar.setLed(10, 1);
   }
}


