#include<DHT.h>
#include<Wire.h>
#include<SPI.h>
#include<SoftwareSerial.h>

#define DHTPIN  A0    
#define DHTTYPE DHT11   
SoftwareSerial bluetooth(0,1);
DHT dht(DHTPIN,DHTTYPE);

void setup() 
{
Serial.begin(9600);
dht.begin();
bluetooth.begin(9600);
}

void loop() 
{


delay(2000);
String h = (String)dht.readHumidity();
float t = dht.readTemperature();
float f = dht.readTemperature(true);

Serial.print("Humidity --> ");
Serial.print(h);
Serial.println("%");

}
