/* Programa del KinyOne. 
 *  Programador: Luis Rolando Colop Tzoc  -CTEISA 18/03/2023 11:48
 *  NUEVO DISE;O,
 *  Acciones: Servo, motorreductor, bluettoh. 
*/

//Declaraciones de librerias. 
#include <Servo.h>

//Declaraciones de pines a utilizar de motores. 
Servo servo1;
int M1A = 5;
int M1B = 9;
int M2A = 2;
int M2B = 3;

void setup() {
  //MODO DE PINES: 
  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M2A, OUTPUT);
  pinMode(M2B, OUTPUT);
  servo1.attach(10);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(M1A, LOW);
  digitalWrite(M1B, HIGH);
   digitalWrite(M2A, HIGH);
  digitalWrite(M2B, LOW);
  servo1.write(0);
  delay(1500);
   delay(1500);
  digitalWrite(M1A, LOW);
  digitalWrite(M1B, LOW);
   digitalWrite(M2A, LOW);
  digitalWrite(M2B, LOW);
  servo1.write(90);
  delay(1000);
  digitalWrite(M1A, HIGH);
  digitalWrite(M1B, LOW);
   digitalWrite(M2A, LOW);
  digitalWrite(M2B, LOW);
  servo1.write(0);
   delay(1500);
  digitalWrite(M1A, LOW);
  digitalWrite(M1B, LOW);
   digitalWrite(M2A, LOW);
  digitalWrite(M2B, LOW);
  servo1.write(90);
  delay(1000);
   digitalWrite(M1A, LOW);
  digitalWrite(M1B, LOW);
   digitalWrite(M2A, HIGH);
  digitalWrite(M2B, LOW);
  servo1.write(0);
   delay(1500);
   digitalWrite(M1A, LOW);
  digitalWrite(M1B, LOW);
   digitalWrite(M2A, LOW);
  digitalWrite(M2B, LOW);
  servo1.write(90);
  delay(1000);

}
