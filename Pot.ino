int pot = A0;
void setup(){
Serial.begin(9600);
pinMode(pot, INPUT);

}
void loop(){
int R = analogRead(pot);
Serial.print(R);
Serial.print("\n");
delay(500);
}
