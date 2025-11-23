

void setup() {
  lightbarSetup();
  UltrasonicSetup();
  
}

void loop(){
  UltrasonicFunction();
  lightbarIncline();
}