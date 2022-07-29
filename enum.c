//Enumeration or enum in c
//Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.

#include<stdio.h>
enum Bool{No=10,Yes=20};
int main()
{
  enum point {x=25,y};
  enum Bool a;
  enum point b;
  a=Yes;
  b=y;
  printf("\na : %d",a);
  printf("\nb : %d",b);
  return 0;
}
