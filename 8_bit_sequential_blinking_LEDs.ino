int latch = 11;
int clk = 9;
int data = 12;
int d = 100;


void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(latch,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(data,OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//1
  shiftOut(data,clk,MSBFIRST,B00000001);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//2
  shiftOut(data,clk,MSBFIRST,B00000010);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//3
  shiftOut(data,clk,MSBFIRST,B00000100);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//4
  shiftOut(data,clk,MSBFIRST,B00001000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//5
  shiftOut(data,clk,MSBFIRST,B00010000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//6
  shiftOut(data,clk,MSBFIRST,B00100000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//7
  shiftOut(data,clk,MSBFIRST,B01000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000000);//8
  shiftOut(data,clk,MSBFIRST,B10000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000001);//11
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000010);//12
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00000100);//13
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00001000);//14
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00010000);//15
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B00100000);//16
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B01000000);//17
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);

  digitalWrite(latch,LOW);
  shiftOut(data,clk,MSBFIRST,B10000000);//18
  shiftOut(data,clk,MSBFIRST,B00000000);
  digitalWrite(latch,HIGH);
  delay(d);
}
