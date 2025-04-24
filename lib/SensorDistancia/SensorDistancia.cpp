#include "SensorDistancia.h"
#include <Arduino.h>

SensorDistancia::SensorDistancia(int pin, String nombre) : pin(pin), nombre(nombre) {
    // Constructor
    Serial.println("SensorDistancia constructor");
}
SensorDistancia::~SensorDistancia() {
    // Destructor
    Serial.println("SensorDistancia destructor");
}
void SensorDistancia::configurar() {
    // Configura el sensor
    pinMode(pin, INPUT);
    Serial.println("SensorDistancia configurado");
}
int SensorDistancia::getValor() {
    // Obtiene el valor del sensor
    int valor = analogRead(pin);
    Serial.print("Valor del sensor de distancia: ");
    Serial.println(valor);
    return valor;
}
String SensorDistancia::getNombre() {
    // Obtiene el nombre del sensor
    return nombre;
}