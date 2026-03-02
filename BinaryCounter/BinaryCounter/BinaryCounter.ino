int Pin8 = 2;
int Pin4 = 5;
int Pin2 = 7;
int Pin1 = 10;
//order of pins should be 8, 4, 2, 1

void setup() {
  pinMode(Pin8, OUTPUT);
  pinMode(Pin4, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin1, OUTPUT);
}

void loop() {

  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin8, LOW);

  delay(1000);

  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin8, LOW);

  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin8, LOW);

  delay(1000);

  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, LOW);

  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, LOW);

  delay(1000);

  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, LOW);

  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, LOW);

  delay(1000);

  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin8, HIGH);

  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin8, HIGH);


  delay(1000);

  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin8, HIGH);


  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin8, HIGH);


  delay(1000);

  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, HIGH);

  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, HIGH);

  delay(1000);

  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, HIGH);

  delay(1000);

  digitalWrite(Pin1, HIGH);
  digitalWrite(Pin2, HIGH);
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin8, HIGH);


}
