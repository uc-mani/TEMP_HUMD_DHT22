#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

DHT my_sensor(5,DHT22);
float temp, humd;

void setup() {
  Serial.begin(9600);
  my_sensor.begin();
}

void loop() {
  humd = my_sensor.readHumidity();
  temp = my_sensor.readTemperature();

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("C, Humidity: ");
  Serial.print(humd);
  Serial.print("%");
  Serial.print("\n");
  delay(2000);
}