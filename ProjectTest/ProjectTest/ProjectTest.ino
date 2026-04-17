int buttonOutput = 13;
int buttonInput = 12;
int analogOutput = 11;
int vRxPin = A0;
int vRyPin = A1;
int lightOutput = 10;
int lightInput = A2;
int waterOutput = 9;
int waterInput = A3;
int tempOutput = 8;
int tempInput = A4;
int ultrasonicOutput = 7;
int trigOutput = 11;
int echoInput = 10;
int soundOutput = 4;
int soundInput = A5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonInput,INPUT);
  pinMode(buttonOutput, OUTPUT);
  pinMode(analogOutput, OUTPUT);
  pinMode(vRxPin, INPUT);
  pinMode(vRyPin, INPUT);
  pinMode(waterOutput, OUTPUT);
  pinMode(waterInput, INPUT);
  pinMode(ultrasonicOutput, OUTPUT);
  pinMode(trigOutput, OUTPUT);
  pinMode(echoInput, INPUT);
  pinMode(soundOutput, OUTPUT);
  pinMode(soundInput, INPUT);
  digitalWrite(buttonOutput, HIGH);
  digitalWrite(analogOutput, HIGH);
  digitalWrite(lightOutput, HIGH);
  digitalWrite(waterOutput, HIGH);
  digitalWrite(tempOutput, HIGH);
  digitalWrite(ultrasonicOutput, HIGH);
  digitalWrite(soundOutput, HIGH);
}

//button works joystick 

void loop() {
  // put your main code here, to run repeatedly:
  int buttonVal = digitalRead(buttonInput);
  //buttonVal is 0 when pushed, and 1 otherwise
  int vRxVal = analogRead(vRxPin);
  int vRyVal = analogRead(vRyPin);
  
  
  //X coordinate is 0 to the right and 1023 to the left
  //Y coordinate is 0 when up and 1023 when down
   
  int lightVal = analogRead(lightInput);

  int waterVal = analogRead(waterInput);
  
  int tempVal = analogRead(tempInput);
  
  digitalWrite(trigOutput, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigOutput, LOW);

  float timeEcho = pulseIn(echoInput, HIGH);
  float distanceCm = 0.017 * timeEcho;
  Serial.println(distanceCm);

  int soundVal = analogRead(soundInput);
}
