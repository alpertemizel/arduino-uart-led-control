void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

 
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned int analogValue = analogRead(A0);
  Serial.println(map(analogValue,0,1023,0,255));
  }
}