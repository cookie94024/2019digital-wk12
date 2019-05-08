int stateBt=0;
int btPin=2;
int btLed=13;

void setup() {
  // put your setup code here, to run once:
pinMode(btPin,INPUT);
pinMode(btLed,OUTPUT);
digitalWrite(btPin,HIGH);
}

void loop() {
  stateBt=digitalRead(btPin);
  if(stateBt==HIGH){
    digitalWrite(btLed,LOW);
    }
    else{
      digitalWrite(btLed,HIGH);
      }
  // put your main code here, to run repeatedly:

}



