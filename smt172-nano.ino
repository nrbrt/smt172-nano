#include <SMT172.h>

long last_update = 0;
long last_measured = 0;
long time_now;
float temp = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  time_now = millis();

  if((time_now - last_update >= 1000) && (temp != 0)){
        Serial.println(temp);
        temp = 0;
        last_update = millis();
  }

  if(time_now - last_measured >= 500){
    getTemp();
    last_measured = millis();
  } 
}

void getTemp(){
  SMT172::startTemperature(0.001);
  repeat:
  switch (SMT172::getStatus()) {
    case 0: goto repeat;
    case 1: 
      temp = SMT172::getTemperature();
      break;
    case 2:
      Serial.println("no sensor");
  }
}
