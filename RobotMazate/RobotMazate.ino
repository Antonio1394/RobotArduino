//#include <SoftwareSerial.h>
  int var='s';
///variables para giro dereha
  int der=2;
  int der2=3;
///variables giro izquierda
  int izq=4;
  int izq2=5;
/////variables arriba
  int arr=6;
  int arr2=7;
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
             Serial.write(var);
          }

      switch(var){
        case 'a':
          digitalWrite(arr,HIGH);
          digitalWrite(arr2,HIGH);
          digitalWrite(aba,LOW);
          digitalWrite(aba2,LOW);
          digitalWrite(izq,LOW);
          digitalWrite(izq2,LOW);
          digitalWrite(der,LOW);
          digitalWrite(der2,LOW);
        break;

        case 'b':
          digitalWrite(arr,LOW);
          digitalWrite(arr2,LOW);
          digitalWrite(aba,HIGH);
          digitalWrite(aba2,HIGH);
          digitalWrite(izq,LOW);
          digitalWrite(izq2,LOW);
          digitalWrite(der,LOW);
          digitalWrite(der2,LOW);
        break;

        case 'r':
          digitalWrite(arr,LOW);
          digitalWrite(arr2,LOW);
          digitalWrite(aba,LOW);
          digitalWrite(aba2,LOW);
          digitalWrite(izq,LOW);
          digitalWrite(izq2,LOW);
          digitalWrite(der,HIGH);
          digitalWrite(der2,HIGH);
        break;

        case 'l':
          digitalWrite(arr,LOW);
          digitalWrite(arr2,LOW);
          digitalWrite(aba,LOW);
          digitalWrite(aba2,LOW);
          digitalWrite(izq,HIGH);
          digitalWrite(izq2,HIGH);
          digitalWrite(der,LOW);
          digitalWrite(der2,LOW);
        break;

        default:
          digitalWrite(arr,LOW);
          digitalWrite(arr2,LOW);
          digitalWrite(aba,LOW);
          digitalWrite(aba2,LOW);
          digitalWrite(izq,LOW);
          digitalWrite(izq2,LOW);
          digitalWrite(der,LOW);
          digitalWrite(der2,LOW);
        
      }//Fin del Switch

     
  }
