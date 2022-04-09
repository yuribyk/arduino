/*
      8x8 LED Matrix MAX7219 Example 01

   by Dejan Nedelkovski, www.HowToMechatronics.com

   Based on the following library:
   GitHub | riyas-org/max7219  https://github.com/riyas-org/max7219
*/

#include <MaxMatrix.h>

int CLK = 2;   // CLK pin of MAX7219 module
int CS = 3;    // CS pin of MAX7219 module
int DIN = 4
;   // DIN pin of MAX7219 module
int maxInUse = 1;

int relay = 22;
int d = 1000;

MaxMatrix m(DIN, CS, CLK, maxInUse); 

char A[] = {4, 8,
            B01111110,
            B00010001,
            B00010001,
            B01111110,
           };

char B[] = {4, 8,
            B01111111,
            B01001001,
            B01001001,
            B00110110,
           };

char smile01[] = {8, 8,
                  B01010101,
                  B10101010,
                  B01010101,
                  B10101010,
                  B01010101,
                  B10101010,
                  B01010101,
                  B10101010
                  };
char smile02[] = {8, 8,
                  B11111000,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111000
                 };
char smile03[] = {8, 8,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111110,
                  B11111111,
                  B11111111,
                  B11111111
                 };

char smile04[] = {8, 8,
                  
B00000000,
B00000000,
B00000000,
B00000000,
B00000001,
B00000000,
B00000000,
B00000000
                 };
char smile05[] = {8, 8,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111,
                  B11111111
                 };

                 char smile06[] = {8, 8,
                  
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000,
B00000000
                 };

void setup() {
  pinMode(relay,OUTPUT);
  m.init(); // MAX7219 initialization
  m.setIntensity(15); // initial led matrix intensity, 0-15

  m.writeSprite(0, 0, smile04);
 
}

void loop() {
 
//m.writeSprite(0, 0, smile04);
digitalWrite(relay,HIGH);
delay(d);
digitalWrite(relay,LOW);
delay(d);
}
