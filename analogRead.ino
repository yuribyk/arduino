#define led 3

int analogPin = A0;
int val = 0;
int PWM = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    val = analogRead(analogPin);
    
    PWM = map(val, 0, 1023, 0, 255);
    Serial.println(PWM);
    analogWrite(led,PWM);
    
  
}
