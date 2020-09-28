void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
 pinMode(2, INPUT);
  Serial.begin(9600);
}
void loop() {
if(digitalRead(2)==HIGH){ 
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  tone(7 ,1000, 200);
  delay(200);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  tone(7, 2000, 200);
  delay(200); 
}
else{
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  }
}
