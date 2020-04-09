//Simple State Machine Weekly Assignment
//Toff Nguyen

int counter = 0;
int button = A0;
int LEDpin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(button);
  delay(100);

  Serial.println(counter);
  
  if (buttonState == HIGH)
  {
    counter++;
    delay(100);
  }
  else if(counter==4)
  {
    digitalWrite(light,HIGH);
  }
  else if (counter==5)
  {
    digitalWrite(light,LOW);
    counter=1;
  }

}
