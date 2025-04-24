#ifndef SENSOR_H
#define SENSOR_H
#include <Arduino.h>

class Sensor {   // Clase base para los sensores
    public:
    Sensor();// Constructor
    ~Sensor();// Destructor
    virtual void configurar() = 0; // Configura el sensor
    virtual void getValor() = 0; // Obtiene el valor del sensor
    virtual String getNombre() = 0; // Obtiene el nombre del sensor   
};
#endif
