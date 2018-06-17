#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    Serial.println("running..");
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(400);
    Serial.println(millis());
}

// added a comment