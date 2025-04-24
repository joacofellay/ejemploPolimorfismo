#include <Arduino.h>
#include <SensorTemperatura.h>
#include <SensorDistancia.h>
SensorDistancia sensorDistancia(A0, "Nombre Sensor de Distancia"); // Crear objeto SensorDistancia
SensorTemperatura sensorTemperatura(A1, "Nombre Sensor de Temperatura"); // Crear objeto SensorTemperatura  
Sensor *sensor[2]; // Crear un array de punteros a Sensor
void setup() {
  Serial.begin(9600); // Inicializar la comunicación serie
  sensor[0] = &sensorDistancia; // Asignar el objeto SensorDistancia al array
  sensor[1] = &sensorTemperatura; // Asignar el objeto SensorTemperatura al array
}

void loop() {
  // put your main code here, to run repeatedly:  
  for(int k;k<2;k++){
    int valor = sensor[k]->getValor(); // Obtener el valor del sensor
    String nombre = sensor[k]->getNombre(); // Obtener el nombre del sensor
    Serial.print("Sensor: " + nombre + ", Valor: " + String(valor)); // Imprimir el nombre y el valor del sensor
    delay(1000); // Esperar 1 segundo 
  }
}

