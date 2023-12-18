void setup() {

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);

}

void loop() {

  if(digitalRead(9)==LOW){
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(1000);
  }
  else if(digitalRead(10)==LOW){
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    delay(1000);
  }
   else if(digitalRead(11)==LOW){
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    delay(1000);
  }
  else{
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
  }
}
