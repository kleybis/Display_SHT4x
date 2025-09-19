#include <Arduino.h>
#include "Display.h"

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  delay(1000);
  Serial.println("Inciando LOGGER");
  delay(2000);
  setUpPantalla();

}

void loop() {
  // put your main code here, to run repeatedly:
}

