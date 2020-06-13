int speakerPin = A0;
int volume = 0;
void setup () {
    pinMode (speakerPin, OUTPUT);
    Serial.begin(9600);
}
void loop () {
  /*for(volume; volume<255; volume++){
    analogWrite(speakerPin, volume);
    Serial.println(volume);
    delay (100);
  }//analogWrite(speakerPin, 128);*/
  digitalWrite(speakerPin,1);
  delay (100);
  
}