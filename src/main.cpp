#include <Arduino.h>

// put sign use for declear here
#define LED D0  

// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);// turn the LED off.(Note that LOW is the voltage level but actually
  digitalWrite(LED_BUILTIN, LOW); 
                        //the LED is on; this is because it is acive low on the ESP8266.
  delay(1000);            // wait for 1 second.
  digitalWrite(LED, LOW); // turn the LED on.
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(1000); // wait for 1 second.
}

