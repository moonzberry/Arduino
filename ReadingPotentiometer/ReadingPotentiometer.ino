//Program to read output voltage of something
int voltagePin=A1;
float voltage=0;
int delayTime=200;
float analogLight=0;
int LEDPin = 2;
//initializing variables
void setup() {
  pinMode(voltagePin,INPUT);
  Serial.begin(9600);
  //Setup
}

void loop() {
  float readVal=analogRead(voltagePin);
  //Creating a float = to the value I'm reading
  analogLight=(255./1023.)*readVal;
  Serial.println(analogLight);
  //Using a linear algebraic function to convert it to standard voltage measurement
  analogWrite(LEDPin, analogLight);
  //Writing the brightness to the LED
  delay(delayTime);
}
