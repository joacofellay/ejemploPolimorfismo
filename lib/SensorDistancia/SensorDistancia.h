#ifndef SENSORDISTANCIA_H
#define SENSORDISTANCIA_H
#include <Arduino.h>
#include "Sensor.h"

class SensorDistancia : public Sensor { // Clase para el sensor de distancia
    private:
        int pin;
        String nombre;
    public:
        SensorDistancia(int pin, String nombre); // Constructor 
        ~SensorDistancia(); // Destructor
        void configurar(); // Configura el sensor
        int getValor(); // Obtiene el valor del sensor
        String getNombre(); // Obtiene el nombre del sensor
};
#endif