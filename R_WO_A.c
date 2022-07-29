//Return Without Argument Function in C

#include<stdio.h>

//int add(); //function declaration

int main()
{
    //function calling
    int a;
    a=add();
    printf("\nTotal : %d",a);
    return 0;
}

//function definition

int add()
{
    int a,b;
    printf("\nEnter the value of A & B : ");
    scanf("%d%d",&a,&b);
    return a+b;
}

