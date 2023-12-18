void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int Value = analogRead(A0);
  Value = Value/4;

  analogWrite(9, Value);

}
