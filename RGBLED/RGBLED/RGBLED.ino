int redPin = 10;
int bluePin = 3;
int greenPin = 7;
String text = "What color should it be?";
String inputColor;
void setup(){
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void reset(){
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
}

void loop() {
  Serial.println(text);
  while(Serial.available()==0){
    
  }
  inputColor = Serial.readString();
  if(inputColor=="Red" or inputColor=="red"){
    reset();
    digitalWrite(redPin, HIGH);
  }
  if(inputColor=="Green" or inputColor=="green"){
    reset();
    digitalWrite(greenPin, HIGH);
  }
  if(inputColor=="Blue" or inputColor=="blue"){
    reset();
    digitalWrite(bluePin, HIGH);
  }
}
