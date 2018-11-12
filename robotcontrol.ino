void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(2,1);  
pinMode(3,1);
pinMode(4,1);
pinMode(5,1);
}
 char a; int i=0;
void loop() {
  // put your main code here, to run repeatedly:


if(Serial.available())
{a=Serial.read();


if(a=='f')
{digitalWrite(2,0);
digitalWrite(3,1);
digitalWrite(4,0);
digitalWrite(5,1);
}

if(a=='b')
{digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,1);
digitalWrite(5,0);
  
}

if(a=='l')
{digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,0);
  
}

  if(a=='r')
{digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,1);
digitalWrite(5,1);
  
}

if(a=='s')
{digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,1);
  
}
}





}
