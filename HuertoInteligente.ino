/* Código para el proyecto para el huerto inteligente creado por Melissa Archila
 *  Proyecto Tecnologico 2022 - 2023
 *  
*/

void setup() {
  // put your setup code here, to run once:

  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A0);
  Serial.println(data);
  if(data > 400){
    Serial.println("Necesita agua");
    digitalWrite(8, LOW);
  }else {
    Serial.println("Tiene agua");
    digitalWrite(8, HIGH);
  }
  delay(200);
  

}
