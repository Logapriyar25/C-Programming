/* PROGRAM 9
If a four-digit number is input through the keyboard,write a program obtain the sum of the first and last digit of this number.
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,f,h;
    printf("\nEnter 4 digit no :");
    scanf("%d",&a);//1234
    b=a/10;//123
    c=a%10;//4
    d=b/10;//12
    //e=b%10;//3
    f=d/10;//1
    //g=d%10;//2
    h=f+c;
    printf("\nSum of first and last digit is :%d",h);
    return 0;
}
