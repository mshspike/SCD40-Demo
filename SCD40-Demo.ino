#include <Wire.h>
#include "SensirionI2CScd4x.h"

SensirionI2CScd4x scd4x;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  scd4x.begin(Wire);

  uint16_t error;
  char errorMessage[256];

  error = scd4x.startPeriodicMeasurement();
  if (error) {
    Serial.print("Error trying to start periodic measurement: ");
    errorToString(error, errorMessage, 256);
    Serial.println(errorMessage);
  }
}

void loop() {
  uint16_t error;
  char errorMessage[256];
  uint16_t co2;
  float temperature;
  float humidity;

  error = scd4x.readMeasurement(co2, temperature, humidity);
  if (error) {
    Serial.print("Error trying to read measurement: ");
    errorToString(error, errorMessage, 256);
    Serial.println(errorMessage);
  } else if (co2 == 0) {
    Serial.println("Invalid sample detected, skipping.");
  } else {
    Serial.print("CO2: ");
    Serial.print(co2);
    Serial.print(" ppm, Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C, Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  delay(5000); // Wait for 5 seconds before the next measurement
}