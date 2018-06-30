#include <Arduino.h>

const int LED_PIN = 8;
const int SENSOR_PIN = 12;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(SENSOR_PIN, INPUT);
    Serial.begin(9600);
}

void loop() {
    delay(100);
    int movement = digitalRead(SENSOR_PIN);
    if (movement == HIGH) {
        Serial.println("Movement detected");
        digitalWrite(LED_PIN, HIGH);
    } else {
        Serial.println("No movement detected");
        digitalWrite(LED_PIN, LOW);
    }
}