#include <SoftwareSerial.h>
int var='s';
int der=2;
int izq=3;
int arr=4;
int aba=5;

void setup()
  { 
    Serial.begin(9600); 
    pinMode(der,OUTPUT);
    pinMode(izq,OUTPUT);
    pinMode(arr,OUTPUT);
    pinMode(aba,OUTPUT);
    pinMode(13,OUTPUT);
    
  }
 
void loop()
  {  
      if (Serial.available()>0){
             var=Serial.read();
          }

      switch(var){
        case 'a':
          digitalWrite(arr,HIGH);
          digitalWrite(aba,LOW);
          digitalWrite(izq,LOW);
          digitalWrite(der,LOW);
        break;

        case 'b':
          digitalWrite(arr,LOW);
          digitalWrite(aba,HIGH);
          digitalWrite(izq,LOW);
          digitalWrite(der,LOW);
        break;

        case 'r':
          digitalWrite(arr,LOW);
          digitalWrite(aba,LOW);
          digitalWrite(izq,LOW);
          digitalWrite(der,HIGH);
        break;

        case 'l':
          digitalWrite(arr,LOW);
          digitalWrite(aba,LOW);
          digitalWrite(izq,HIGH);
          digitalWrite(der,LOW);
        break;

        default:
          digitalWrite(arr,LOW);
          digitalWrite(aba,LOW);
          digitalWrite(izq,LOW);
          digitalWrite(der,LOW);
        
      }//Fin del Switch

     
  }
