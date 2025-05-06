
void setup() {
digitalWrite(13,LOW);
}

void loop() {
pinMode(13, INPUT);
delay(1);
pinMode(13, OUTPUT);
delay(1);
}
