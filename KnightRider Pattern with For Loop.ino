void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  //First pattern
  for (int x = 1; x <= 7; x++){
    digitalWrite(x, HIGH);
    delay(200);
    digitalWrite(x, LOW);
  }
  //Second pattern
  for (int y = 6; y > 1; y--){
    digitalWrite(y, HIGH);
    delay(200);
    digitalWrite(y, LOW);
  }
}
