// Three digit number input through the keyboard write  a program to find the given number is Armstrong number or not.

#include<stdio.h>
int main()
{
    int n,a,d1,d2,d3;
    printf("\nEnter the 3 digit number :");
    scanf("%d",&n);//153
    d3=n%10;//3
    a=n/10;//15
    d2=a%10;//5
    d1=a/10;//1
    a=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
    if(a==n)
    {
        printf("%d is an armstrong number",n);
    }
    else
    {
        printf("%d is not an armstrong number",n);
    }
    return 0;
}
