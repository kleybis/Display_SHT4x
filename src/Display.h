#ifndef DISPLAY_H
#define DISPLAY_H
#include <Adafruit_SSD1306.h>

void setUpPantalla(Adafruit_SSD1306 pantalla);
void displayTempHum(float temp, float hum, Adafruit_SSD1306);

#endif

