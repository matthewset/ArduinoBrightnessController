int brightness;
int low;
int high;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
  Serial.println("Brightness:");
  while(Serial.available()==0){
  }
  brightness=Serial.parseInt();
}

void loop() {
digitalWrite(13,HIGH);
delay(brightness);
digitalWrite(13,LOW);
delay(10-brightness);
}
