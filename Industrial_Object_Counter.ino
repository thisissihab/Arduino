#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 4, d5 = 6, d6 = 7, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int count = 0;


void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("Objects = ");
  

}

void loop() {
  motor(80,80,1,0,1,0);
  Serial.println(digitalRead(10));
  
  
  if(digitalRead(10) == 0){
    lcd.setCursor(0, 1);
    count += 1;
    lcd.print(count);
    delay(200);
    }
  
  

}

void motor(int a, int b, int c, int d, int e, int f){
  digitalWrite(2,1);
  analogWrite(3,a);
  analogWrite(5,b);
  
  digitalWrite(A3,c);
  digitalWrite(A4,d);

  digitalWrite(A1,e);
  digitalWrite(A2,f);
  
  }
