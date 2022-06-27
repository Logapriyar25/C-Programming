/* PROGRAM 6
Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
*/

#include<stdio.h>
int main()
{
    int c,d,b;
    printf("\nEnter 2 Nos:");
    scanf("%d%d",&c,&d); // 5 10
    printf("\n C : %d  D : %d",c,d);
    b=c; //5
    c=d; //10
    d=b; //5
    printf("\n C : %d  D : %d",c,d);
    return 0;
}
