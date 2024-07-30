#define trig 2 //define port number 2 as trig. No need ending semicolen
#define echo 4 //define port number 4 as echo. No need ending semicolen

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(13, OUTPUT); //Warning light
  Serial.begin(9600); //serial moniter
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long t = pulseIn(echo, HIGH);

  long inches = t / 74  / 2;

  long cm = t / 29 / 2;

  float f = inches / 12;

  Serial.print(inches);
  Serial.print("in\t");
  Serial.print(cm);
  Serial.print("cm\t");
  Serial.print(f);
  Serial.println("\"");

  if (cm <= 10){
    digitalWrite(13, HIGH); //Waring light on
  }else{
    digitalWrite(13, LOW); //Waring light off
  }

  delay(1000); //delay 1s for better readings
}
