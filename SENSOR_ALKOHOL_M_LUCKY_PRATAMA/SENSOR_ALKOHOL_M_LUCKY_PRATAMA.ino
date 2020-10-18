#include <LiquidCrystal.h>
LiquidCrystal lcd( 13, 12, 11, 10, 9, 8);
int GASSENSOR =3;
int LEDBLUE =5;
int LEDYELLOW =4;
void setup() {
  // put your setup code here, to run once:
pinMode(GASSENSOR, INPUT_PULLUP);
pinMode(LEDBLUE, OUTPUT);
pinMode(LEDYELLOW, OUTPUT);
lcd.begin(20,4);
lcd.setCursor(0,0);
lcd.print("SENSOR PENDETEKSI");
lcd.setCursor(0,1);
lcd.print("ALKOHOL"); 
lcd.setCursor(0,2);
lcd.print("TELEKOMUNIKASI PNJ");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
int GASSENSOR_READ = digitalRead(GASSENSOR);
if (GASSENSOR_READ == LOW){
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALKOHOL NOT DETECTED");
  digitalWrite(LEDBLUE, LOW);
  digitalWrite(LEDYELLOW, HIGH);
  delay(20);
}
else {
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALKOHOL DETECTED");
  digitalWrite(LEDBLUE, HIGH);
  digitalWrite(LEDYELLOW, LOW);
  delay(20);
}
}
