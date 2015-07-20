#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2
OneWire ourWire(ONE_WIRE_BUS);
DallasTemperature sensors(&ourWire);



float temp; 
int temp2;



int ledA = 13;
int ledB = 4;
int ledC = 8;
int ledD = 11;
int ledE = 12;
int ledF = 3;
int ledG = 5;
int Ana1 = 6;
int Ana2 = 7;
int Ana3 = 9;
int Ana4 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(Ana1, OUTPUT);
  pinMode(Ana2, OUTPUT);
  pinMode(Ana3, OUTPUT);
  pinMode(Ana4, OUTPUT);
  sensors.begin();

}

void loop() {
   sensors.requestTemperatures();
  Serial.println(sensors.getTempCByIndex(0));
  temp2 = 10* sensors.getTempCByIndex(0);

  
for (int i=0; i<1000; i++)
    {
     
     int tab[3];
     tab[0] = temp2 % 10;
     tab[1] = (temp2 /10) % 10 ;
     tab[2] = temp2 /100 ;
     digitalWrite(Ana1,HIGH);
     digitalWrite(Ana2,LOW);
     digitalWrite(Ana3,LOW);
     digitalWrite(Ana4,LOW);
     affichenombre(tab[2]);
     delay(5);
     digitalWrite(Ana1,LOW);
     digitalWrite(Ana2,HIGH);
     digitalWrite(Ana3,LOW);
     digitalWrite(Ana4,LOW);
     affichenombre(tab[1]);
     delay(5);
     digitalWrite(Ana1,LOW);
     digitalWrite(Ana2,LOW);
     digitalWrite(Ana3,HIGH);
     digitalWrite(Ana4,LOW);
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledG,LOW);
     digitalWrite(ledF,LOW);
     digitalWrite(ledC,HIGH);
     digitalWrite(ledD,HIGH);
     digitalWrite(ledE,HIGH);   
     delay(5);
     digitalWrite(Ana1,LOW);
     digitalWrite(Ana2,LOW);
     digitalWrite(Ana3,LOW);
     digitalWrite(Ana4,HIGH);
     affichenombre(tab[0]);
     delay(5);
     
    } 
     digitalWrite(Ana1,LOW);
     digitalWrite(Ana2,LOW);
    
}

void affichenombre(int nombre)

{
  if (nombre != 1 && nombre !=4)
  digitalWrite(ledA,LOW);
  else digitalWrite(ledA,HIGH);
  
  if (nombre != 5 && nombre !=6)
  digitalWrite(ledB,LOW);
  else digitalWrite(ledB,HIGH);
  
  if (nombre != 2)
  digitalWrite(ledC,LOW);
  else digitalWrite(ledC,HIGH);
  
  if (nombre != 1 && nombre !=4 && nombre != 7)
  digitalWrite(ledD,LOW);
  else digitalWrite(ledD,HIGH);
  
  if (nombre != 1 && nombre != 3 && nombre != 4 && nombre != 5 && nombre != 7 && nombre !=9)
  digitalWrite(ledE,LOW);
  else digitalWrite(ledE,HIGH);
  
  if (nombre != 1 && nombre != 2 && nombre != 3 && nombre !=7)
  digitalWrite(ledF,LOW);
  else digitalWrite(ledF,HIGH);
  
  if (nombre != 0 && nombre != 1 && nombre !=7)
  digitalWrite(ledG,LOW);
  else digitalWrite(ledG,HIGH);
  
}



