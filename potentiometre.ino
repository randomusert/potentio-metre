void setup() {
  Serial.begin(9600);

}

void loop() {
  int time = analogRead(A0);
  Serial.println(time);
  delay(1000);
}
