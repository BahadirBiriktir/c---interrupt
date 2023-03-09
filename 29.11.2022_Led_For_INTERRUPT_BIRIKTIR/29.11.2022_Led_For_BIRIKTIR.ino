bool DirectionUp = true;
void setup() {
  for(int pin = 2; pin <= 4; pin++){
    pinMode(pin, OUTPUT);
  }
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),changeDirection, FALLING);
}

void loop() {
  if(DirectionUp){
    for(int pinH = 2; pinH <= 4; pinH++) {
      delay(50);
      digitalWrite(pinH, HIGH);
    }
    for(int pinL = 2; pinL <= 4; pinL++) {
      delay(50);
      digitalWrite(pinL, LOW);
    }
 } 

  else{
   for(int pinrH = 4; pinrH >= 2; pinrH--) {
     delay(50);
     digitalWrite(pinrH, HIGH);
   }
     for(int pinrL = 4; pinrL >= 2; pinrL--) {
      delay(50);
      digitalWrite(pinrL, LOW);
    }
  }
}

void changeDirection(){
 DirectionUp = !DirectionUp;
}

