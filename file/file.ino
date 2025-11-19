void setup() {
  bar.begin();
  Serial.begin(9600);
}

void loop(){
  UltrasonicFunction();
  lightbarIncline();
}