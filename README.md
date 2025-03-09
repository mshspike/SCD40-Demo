# SCD40-Demo

This project demonstrates how to use the Sensirion SCD40 sensor to measure CO2, temperature, and humidity using an Arduino.

## Requirements

- Arduino board (e.g., Arduino Uno)
- Sensirion SCD40 sensor
- Arduino IDE
- Sensirion I2C SCD4x library

## Libraries

You need to install the following library in the Arduino IDE:

- [Sensirion I2C SCD4x](https://github.com/Sensirion/arduino-i2c-scd4x)

To install the library, follow these steps:

1. Open the Arduino IDE.
2. Go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
3. Search for `Sensirion I2C SCD4x`.
4. Click `Install`.

## Wiring

Connect the SCD40 sensor to the Arduino as follows:

| SCD40 Pin | Arduino Pin |
|-----------|-------------|
| VDD       | 3.3V        |
| GND       | GND         |
| SDA       | A4 (SDA)    |
| SCL       | A5 (SCL)    |

## Usage

1. Open the `SCD40-Demo.ino` file in the Arduino IDE.
2. Connect your Arduino board to your computer.
3. Select the correct board and port in the Arduino IDE.
4. Upload the sketch to the Arduino board.
5. Open the Serial Monitor (set the baud rate to 9600) to see the sensor readings.
