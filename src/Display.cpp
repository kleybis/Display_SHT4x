#include <Adafruit_SSD1306.h>
#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_GFX.h>

void setUpPantalla(Adafruit_SSD1306 pantalla){

		if(!pantalla.begin(SSD1306_SWITCHCAPVCC,0x3C)){
			Serial.print("Error al icicializar la pantalla");
		}

	pantalla.begin(SSD1306_SWITCHCAPVCC,0x3C);
		Serial.println("PANTALLA INICIADA...");
		Serial.println("Generando texto de inicio...");
		delay(2000);

		pantalla.clearDisplay();
		pantalla.setTextSize(1);
		pantalla.setTextColor(SSD1306_WHITE);
		pantalla.setCursor(0,0);
		pantalla.print("INICIANDO SSD1306...");
		pantalla.display();

		delay(3000);
		pantalla.clearDisplay();
		pantalla.print("INICIALIZANDO FUNCIONES");

		
	// TEXTO DE INICIALIZACION DE LA PANTALLA
}

void displayTempHum(float temp, float hum, Adafruit_SSD1306 pantalla){

	pantalla.setCursor(5,5);
	pantalla.setTextSize(2);
	pantalla.println("Temperatura:  ");
	pantalla.print(temp);

	pantalla.setCursor(5,10);
	pantalla.println("Humidity: ");
	pantalla.print(hum);
	


	
}


