#include <SoftwareSerial.h>
///variables para giro dereha
  int der=2;
  int der2=3;
///variables giro izquierda
  int izq=4;
  int izq2=5;
/////variables arriba
  int arr=6;
  int arr2=7
/////variables abajo
  int aba=8;
  int aba2=9;

void setup()
  { 
    Serial.begin(9600); 
    pinMode(der,OUTPUT);
    pinMode(der2,OUTPUT);
    pinMode(izq,OUTPUT);
    pinMode(izq2,OUTPUT);
    pinMode(arr,OUTPUT);
    pinMode(arr2,OUTPUT);
    pinMode(aba,OUTPUT);
    pinMode(aba2,OUTPUT);
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
