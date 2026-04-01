int buttonOutput = 13;
int buttonInput = 12;
int analogOutput = 2 ;
int vRxPin = A0;
int vRyPin = A1;
int lightOutput = 2;
int lightInput = A2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonInput,INPUT);
  pinMode(buttonOutput, OUTPUT);
  pinMode(analogOutput, OUTPUT);
  pinMode(vRxPin, INPUT);
  pinMode(vRyPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buttonOutput, HIGH);
  int buttonVal = digitalRead(buttonInput);
  //buttonVal is 0 when pushed, and 1 otherwise
  digitalWrite(analogOutput, HIGH);
  int vRxVal = analogRead(vRxPin);
  int vRyVal = analogRead(vRyPin);

  digitalWrite(lightOutput, HIGH);
  int lightVal = analogRead(lightInput);
  Serial.println(lightVal);
}
