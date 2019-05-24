int outpin = 13;

int inpin1 = 8;
int inpin2 = 9;
int inpin3 = 10;

void setup() {
  pinMode(outpin, OUTPUT);
  digitalWrite(outpin, LOW);

  pinMode(inpin1, INPUT);
  pinMode(inpin2, INPUT);
  pinMode(inpin3, INPUT);
}

void loop() {
  if (digitalRead(inpin1) && digitalRead(inpin2) && digitalRead(inpin3)) {
    digitalWrite(outpin, LOW);
  }
  else {
    digitalWrite(outpin, HIGH);
  }
} 
