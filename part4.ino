void setup() {
  pinMode(13, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int d = 48;
  analogWrite(3, d);

  long sum = 0;
  long num_reads = 1000;
  for (long i = 0; i < num_reads; i++) {
    sum += digitalRead(13);
  }
  Serial.println(sum);

}
