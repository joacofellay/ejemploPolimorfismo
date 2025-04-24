#ifndef SENSORTEMPERATURA_H
#define SENSORTEMPERATURA_H
#include <Arduino.h>
#include "Sensor.h"

class SensorTemperatura : public Sensor { // Clase para el sensor de Temperatura
    private:
        int pin;
        String nombre;
    public:
        SensorTemperatura(int pin, String nombre); // Constructor 
        ~SensorTemperatura(); // Destructor
        void configurar(); // Configura el sensor
        int getValor(); // Obtiene el valor del sensor
        String getNombre(); // Obtiene el nombre del sensor
};
#endif