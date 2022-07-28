//No Return With Argument Function in C

#include<stdio.h>

//Function Declaration
void add(int,int);

int main()
{
    //Function Calling
    add(25,11);  //Actual Parameters
    return 0;
}
//Function Definition
void add(int a,int b)  //Formal Parameters
{
  int c;
  c=a+b;
  printf("\nTotal : %d",c);
}

