#include "SensorTemperatura.h"
#include <Arduino.h>

SensorTemperatura::SensorTemperatura(int pin, String nombre) : pin(pin), nombre(nombre) {
    // Constructor
    Serial.println("SensorTemperatura constructor");
}
SensorTemperatura::~SensorTemperatura() {
    // Destructor
    Serial.println("SensorTemperatura destructor");
}
void SensorTemperatura::configurar() {
    // Configura el sensor
    pinMode(pin, INPUT);
    Serial.println("SensorTemperatura configurado");
}
int SensorTemperatura::getValor() {
    // Obtiene el valor del sensor
    int valor = analogRead(pin);
    Serial.print("Valor del sensor de Temperatura: ");
    Serial.println(valor);
    return valor;
}
String SensorTemperatura::getNombre() {
    // Obtiene el nombre del sensor
    return nombre;
}