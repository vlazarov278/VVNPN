#include <SoftwareSerial.h>
SoftwareSerial bt (3, 4) ;

char input;
int speed=0;

void setup()
{
  pinMode(13, OUTPUT);
  digitalWrite(13, 1);
  bt.begin(9600);
}

void loop()
{
  if(bt.available() > 0)
  {
    input = bt.read();
  }
switch(input)
{
 case'F': forward(speed);break;
 case'B': backward(speed);break;
 case'S': stop();break;
 case'R': right(speed);break;
 case'L': left(speed);break;
 case'I': turnRightForward(speed); break;
 case'G': turnLeftForward(speed); break;
 case'H': turnLeftBackward(speed); break;
 case'J': turnRightBackward(speed); break;
 case'0': stop(); break;
 case'1': speed=map(1,0,10,0,255); break;//analogWrite(5,map(1,0,10,0,255)); analogWrite(6,map(1,0,10,0,255)); analogWrite(9,map(1,0,10,0,255)); analogWrite(5,map(10,0,10,0,255)); break;
 case'2': speed=map(2,0,10,0,255); break;//analogWrite(5,map(2,0,10,0,255)); analogWrite(6,map(2,0,10,0,255)); analogWrite(9,map(2,0,10,0,255)); analogWrite(10,map(2,0,10,0,255)); break;
 case'3': speed=map(3,0,10,0,255); break;//analogWrite(5,map(3,0,10,0,255)); analogWrite(6,map(3,0,10,0,255)); analogWrite(9,map(3,0,10,0,255)); analogWrite(10,map(3,0,10,0,255)); break;
 case'4': speed=map(4,0,10,0,255); break;//analogWrite(5,map(4,0,10,0,255)); analogWrite(6,map(4,0,10,0,255)); analogWrite(9,map(4,0,10,0,255)); analogWrite(10,map(4,0,10,0,255)); break;
 case'5': speed=map(5,0,10,0,255); break;//analogWrite(5,map(5,0,10,0,255)); analogWrite(6,map(5,0,10,0,255)); analogWrite(9,map(5,0,10,0,255)); analogWrite(10,map(5,0,10,0,255)); break;
 case'6': speed=map(6,0,10,0,255); break;//analogWrite(5,map(6,0,10,0,255)); analogWrite(6,map(6,0,10,0,255)); analogWrite(9,map(6,0,10,0,255)); analogWrite(10,map(6,0,10,0,255)); break;
 case'7': speed=map(7,0,10,0,255); break;//analogWrite(5,map(7,0,10,0,255)); analogWrite(6,map(7,0,10,0,255)); analogWrite(9,map(7,0,10,0,255)); analogWrite(10,map(7,0,10,0,255)); break;
 case'8': speed=map(8,0,10,0,255); break;//analogWrite(5,map(8,0,10,0,255)); analogWrite(6,map(8,0,10,0,255)); analogWrite(9,map(8,0,10,0,255)); analogWrite(10,map(8,0,10,0,255)); break;
 case'9': speed=map(9,0,10,0,255); break;//analogWrite(5,map(9,0,10,0,255)); analogWrite(6,map(9,0,10,0,255)); analogWrite(9,map(9,0,10,0,255)); analogWrite(10,map(9,0,10,0,255)); break;
 case'q': speed=map(10,0,10,0,255); break;//analogWrite(5,map(10,0,10,0,255)); analogWrite(6,map(10,0,10,0,255)); analogWrite(9,map(10,0,10,0,255)); analogWrite(10,map(10,0,10,0,255)); break; 
 case'D': stop(); break;
 default: stop(); break;
}
  
  delay(1);
}

void forward(int speed)
{
    analogWrite(5, speed);
    analogWrite(6, 0);
    analogWrite(9, speed);
    analogWrite(10, 0);
}

void backward(int speed)
{
    analogWrite(5, 0);
    analogWrite(6, speed);
    analogWrite(9, 0);
    analogWrite(10, speed);
}

void right(int speed)
{
  analogWrite(5, speed);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}

void left(int speed)
{
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, speed);
  analogWrite(10, 0);
}  

void stop()
{
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
}

void turnRightForward(int speed)
{
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(5, speed);
  analogWrite(6, 0);
}

void turnLeftForward(int speed)
{
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, speed);
  analogWrite(10, 0);
}
void turnLeftBackward(int speed)
{
  analogWrite(9, 0);
  analogWrite(10, speed);
  analogWrite(5, 0);
  analogWrite(6, 0);
}
void turnRightBackward(int speed)
{
  analogWrite(5, 0);
  analogWrite(6,speed);
  analogWrite(9,0);
  analogWrite(10, 0);
}
