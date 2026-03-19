int pin=5;
String question1 = "Select a brightness level (0-100)";
String question2 = "Select a duration for pauses (seconds)";
String question3 = "Select a number of blinks";
int values[5];

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop() {
  for(int g=1;g<=5;g++){
    if(g==1){
      Serial.println(question1);
    }
    if(g==3){
      Serial.println(question2);
    }
    if(g==5){
      Serial.println(question3);
    }
    //asks for user input
    
    while (Serial.available()==0){
    }
  values[g]=Serial.parseInt();
  }
  double brightness = values[1]*(255/100);
  double delayTime = values[3]*(1000/1);
  int blinks = values[5];
  //switches from list to variables
  
  for(int s=1;s<=blinks;s++){
    analogWrite(pin, brightness);
    delay(delayTime);
    digitalWrite(pin, LOW);
    delay(delayTime);
  }
  //turns the LED on and off with the user set conditions
}
