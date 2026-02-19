#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

int touchpin=2;
int state=0;

void setup() {
    pinMode(touchpin,pinMode:INPUT);
    Serial.begin(9600);
}

void loop() {
    state=digitalRead(touchpin);
    // if (state==1)
    // {
    //     Serial.println("Touched");
    // }
    // else
    // {
    //     Serial.println("Not Touched");
    }
}
