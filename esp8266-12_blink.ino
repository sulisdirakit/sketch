int gpioCount=8;
int led_pin[8]={0,2,4,12,13,14,15,16};

void setup() {
  for (byte i=0; i<gpioCount; i++) {
     pinMode(led_pin[i], OUTPUT);
  }
}

void loop() {
  for (byte i=0; i<gpioCount; i++) {
     digitalWrite(led_pin[i], LOW); //turn LED on, it is acive low on the ESP-07
     delay(50);  
     digitalWrite(led_pin[i], HIGH); 
     delay(50);  
     digitalWrite(led_pin[i], LOW); //turn LED on, it is acive low on the ESP-07
     delay(50);
  }
}
