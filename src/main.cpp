#include <Arduino.h>
#include "Display.h"
#include "sht4x.h"

#define ANCHO 128
#define ALTO 64



Adafruit_SSD1306 pantalla(ANCHO,ALTO, &Wire, -1);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  delay(1000);
  Serial.println("Inciando LOGGER");
  delay(2000);
  Serial.println("Iniciaondo pantalla");
  setUpPantalla(pantalla);
  delay(3000);
  setUpSensor();
  

}

void loop() {
  // put your main code here, to run repeatedly:
}

