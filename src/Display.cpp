#include <Adafruit_SSD1306.h>
#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_GFX.h>

#define ANCHO 128
#define ALTO 64

// CREAR EL OBJETO SSD1306

Adafruit_SSD1306 pantalla(ANCHO,ALTO, &Wire);


void setUpPantalla()	{

	if(!pantalla.begin(SSD1306_SWITCHCAPVCC,0x3C)){

		Serial.println("ERROR AL INCIAR LA PANTALLA");
	}
	int cont = 0;

	for(int i=1; i <=3; i++){
		cont = cont + 1;

		textInicioPantall(cont);
	}

	pantalla.clearDisplay();

}

void textInicioPantall (int cont){

	pantalla.clearDisplay();
	pantalla.setTextSize(1);
	pantalla.setTextColor(SSD1306_WHITE);
	pantalla.setCursor(20,30);

	pantalla.printf("INICIANDO PANTALLA EN...", cont);
	pantalla.display();

	delay(500);

	if(cont == 3){
		pantalla.stopscroll();
	}
	else {
		pantalla.startscrollright(0x00, 0x0f);		
		}
	
}





