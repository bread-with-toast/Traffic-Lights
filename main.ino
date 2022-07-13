int r = 2;
int y = 3;
int b = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(b, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r, HIGH);
  digitalWrite(y, LOW);
  digitalWrite(b, LOW);
  delay(5000);
  
  digitalWrite(r, LOW);
  digitalWrite(y, HIGH);
  digitalWrite(b, LOW);
  delay(2500);

  digitalWrite(r, LOW);
  digitalWrite(y, LOW);
  digitalWrite(b, HIGH);
  delay(10000);
  

}
