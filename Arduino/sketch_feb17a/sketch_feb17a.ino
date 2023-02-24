void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(analogRead(A0) >520 && analogRead(A0) < 700){
    Serial.println("1");
    }
  if(analogRead(A0)> 700){
    Serial.println("2");
    }
}
