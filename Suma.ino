int A = 0; 
int B = 0; 
void setup() {
  pinMode(2, INPUT);    //A
  pinMode(3, INPUT);    //B
  pinMode(12, OUTPUT);  //Suma
  pinMode(13, OUTPUT);  //Acarreo
}
//SISTEMA Sumador y acarreo
void loop() {

  A = digitalRead(2);
  B = digitalRead(3);

  if (A^B)
    {digitalWrite(12, HIGH);} 
  if (A&&B)
    {digitalWrite(13, HIGH);}
 digitalWrite(12, LOW);
 digitalWrite(13, LOW);
}
