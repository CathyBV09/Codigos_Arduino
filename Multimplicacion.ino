int A = 0;
int B = 0;

void setup() {
  pinMode(2, INPUT);    // A
  pinMode(3, INPUT);    // B
  pinMode(12, OUTPUT);  // Producto
}

void loop() {

  A = digitalRead(2);
  B = digitalRead(3);

  // Multiplicación lógica
  if (A && B) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
}
