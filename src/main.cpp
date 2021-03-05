#include <Arduino.h>
void setup() {
    pinMode(13, OUTPUT);
    digitalWrite(13, LOW);
// write your initialization code here
}

void loop() {
    digitalWrite(13, HIGH);
    delay(5000);
    digitalWrite(13, LOW);
    delay(5000);
// write your code here
}