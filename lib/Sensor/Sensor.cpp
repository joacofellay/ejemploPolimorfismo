#include "Sensor.h"
#include <Arduino.h>

Sensor::Sensor(){
    // Constructor
    Serial.println("Sensor constructor");
}
Sensor::~Sensor(){
    // Destructor
    Serial.println("Sensor destructor");
}