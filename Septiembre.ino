#include<EEPROM.h>
Servo myservo
int Echo=A4;
int trig=A5;
const int InputNodes=3;
const int HiddenNodes=4;
const int OutputNodes=4;
int i,j;
double Accum;
double Hidden[HiddenNodes];
double Output[OutputNodes];
float HiddenWeights[3][4]{{ Direccion;
float OutputWeights[4][4]{{ Direccion+1;
int Direccion=0;  
byte val1;
byte val2;

void setup(){
Serial.begin(9600);
byte informacion=B11001;
int valor= analogRead(0);
EEPROM.write(Direccion, informacion);
EEPROM.write(Direccion+1, valor);}
void loop (){
EEPROM.read(Direccion);
EEPROM.read(Direccion+1);
Serial.print(“en la direccion esta:”);
Serial.print(Direccion);
Serial.print(“se encuentra”);
Serial.print (val1, DEC);
delay(100);
Serial.print(“en la direccion esta:”);
Serial.print(Direccion+1);
Serial.print(“se encuentra”);
Serial.print (val2, DEC);
delay(100);
}
void stop(){
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);
  Serial.println("parar");
}


