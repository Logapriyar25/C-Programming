// If statement and If Else statement

#include<stdio.h>
int main()
{
    char name[10];
    int age;
    printf("\n Enter Your Name : ");
    scanf("%s",name);
    printf("\n Enter Your Age : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n %s age is %d Eligible for  vote",name,age);
    }
    else
    {
        printf("\n %s age is %d Not Eligible for vote",name,age);
    }
    return 0;
}


