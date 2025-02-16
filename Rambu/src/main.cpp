#include <Arduino.h>

void setup() {
    Serial.begin(115200);

    pinMode(33, OUTPUT);
    pinMode(26, OUTPUT);
    pinMode(25, OUTPUT);

    Serial.println("");
    Serial.println("Hello, XIAO ESP32-S3!");
    Serial.println("Welcome to Wokwi :-)");
}

void loop() {
    Serial.println("Red");
    digitalWrite(33, HIGH);
    delay(500);
    digitalWrite(33, LOW);

    Serial.println("Green");
    digitalWrite(26, HIGH);
    delay(500);
    digitalWrite(26, LOW);

    Serial.println("Orange");
    digitalWrite(25, HIGH);
    delay(500);
    digitalWrite(25, LOW);
}
