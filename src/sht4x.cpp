#include <Arduino.h>
#include "Adafruit_SHT4x.h"

Adafruit_SHT4x sht4x = Adafruit_SHT4x(); 


void setUpSensor(){
    
    if(!sht4x.begin(&Wire)){
        Serial.println("No se ha iniciado el sensor");
        while(1)delay(1);
    }
    delay(500);

    Serial.println("Sensor iniciado correctamente");

    Serial.println(sht4x.readSerial(), HEX);
    
    delay(1000);

    Serial.println("Estableciendo precision");

    sht4x.setPrecision(SHT4X_HIGH_PRECISION);
    sht4x.setHeater(SHT4X_NO_HEATER);

}

void getTempHum(float TEMP, float HUM){

    sensors_event_t temp,hum;
    
    Serial.println("Obteniendo temperatura y humedad relativa");

    sht4x.getEvent(&hum,&temp);

    TEMP = temp.temperature;

    HUM = hum.relative_humidity;
    

}



