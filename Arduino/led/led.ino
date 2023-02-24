const int ledPin = 18;
int a = 0;
int adc = 0;
int finall = 0;
void setup(){
  pinMode(ledPin, OUTPUT); 
}

void loop(){
  adc = analogRead(A0);
  finall = 1000-adc+20;
  analogWrite(ledPin, finall);
}
