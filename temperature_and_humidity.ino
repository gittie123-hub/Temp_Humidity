
#include "DHT.h"
#define dhtPin 0
DHT dht(dhtPin, DHT11);

void setup() {
  dht.begin();
  Serial.begin(9600);
  Serial.print("DHT11 experiment");
  Serial.println("Temperature and humidity sensor");
  delay(1000);
  
  // put your setup code here, to run once:

}

void loop() {
  float temp = dht.readTemperature();
  float humid = dht.readHumidity();
  Serial.print("Humidity = ");
  Serial.println(humid);
  Serial.print("Temperature = ");
  Serial.print(temp);
  delay(500);
  // put your main code here, to run repeatedly:

}
