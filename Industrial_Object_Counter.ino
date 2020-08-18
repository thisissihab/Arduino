#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 4, d5 = 6, d6 = 7, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int count = 0;

int in1 = 3;
int in2 = 5;
int in3 = 9;
int in4 = 10;


void setup() {
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("Objects = ");
  

}

void loop() {
  motor(80,80);
  Serial.println(digitalRead(10));
  
  
  if(digitalRead(10) == 0){
    lcd.setCursor(0, 1);
    count += 1;
    lcd.print(count);
    delay(200);
    }
  
  

}

void motor(int pwm1, int pwm2)
{
  analogWrite(in1,pwm1);
  analogWrite(in2,00);
  
  analogWrite(in3,pwm2);
  analogWrite(in4,00);
  
  
  }
