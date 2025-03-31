void setup() {
  Serial.begin(9600); 
}

void loop() {

  int numerador = 10;   
  int denominador = 2;  

  if (denominador != 0) { 
    int resultado = numerador / denominador; 
    Serial.print("Resultado de la división: ");
    Serial.println(resultado); 
  } else {
    Serial.println("Error: División por cero no permitida"); 
  }

  delay(1000); 
}
