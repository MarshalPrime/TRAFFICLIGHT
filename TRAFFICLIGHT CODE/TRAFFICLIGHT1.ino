#include<Wire.h> 
int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int dp=8;
int T1=9;
void setup()
{
  
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  

}
void loop()
{
for(int i=0;i<10;i++)
{ if(i==0)
  {
   digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
    digitalWrite(dp,0);
      delay(1000);
  
  }
  if(i==1)
  {
    digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
    digitalWrite(dp,0);
      delay(1000);
  
  }
 
    if(i==2)
  {
  digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(dp,0);
      delay(1000);
 
  }
  if(i==3)
  {
      digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
    digitalWrite(dp,0);
      delay(1000);
  
  }
  if(i==4)
  {  digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
    digitalWrite(dp,0);
      delay(1000);

 
  }
 if(i==5)
  {
    digitalWrite(T1,1);
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
    digitalWrite(dp,0);
      delay(1000);

  }
 if(i==6)
  {
   digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
    digitalWrite(dp,0);
      delay(1000);

  }
 if(i==7)
  {
    digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
    digitalWrite(dp,0);
      delay(1000);
 
  }
 if(i==8)
  {
   digitalWrite(T1,1);
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
    digitalWrite(dp,0);
    delay(1000);
  
  }
 if(i==9)
  {
   digitalWrite(T1,1);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(dp,0);
 delay(3000);
 
  }
  }    
     }

  
  
  
