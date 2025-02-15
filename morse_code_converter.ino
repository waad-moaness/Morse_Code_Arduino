#define buzzer 4
char reading ; 
void setup() {
 Serial.begin(9600);
 pinMode(buzzer,OUTPUT);

}

void loop() {
   if (Serial.available() > 0) {
reading=Serial.read();
delay(300);
switch(reading){
case 'a': digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(240);
          
break;

case 'b':  digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'c':  digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'd': digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'e':  digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(240);

break;

case 'f':digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'g': digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'h':digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'i': digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'j':digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'k': digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'l': digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'm': digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'n':  digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'o':  digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(80);
           digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'p': digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);


break;
case 'q':digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'r': digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 's': digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 't': digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'u':digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'v': digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'w':digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'x':digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;
case 'y':digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
          delay(240);

break;

case 'z': digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(240);
          digitalWrite(buzzer,0);
           delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(80);
          digitalWrite(buzzer,1);
          delay(80);
          digitalWrite(buzzer,0);
          delay(240);

break;
case ' ': digitalWrite(buzzer,0);
          delay(320);

break;

}
   }


}
