//Swapping 2 numbers without using 3rd variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter 2 Nos:");
    scanf("%d%d",&a,&b); // 5 10
    printf("\n A : %d  B : %d",a,b);
    a=a+b; //15
    b=a-b; //5
    a=a-b; //10
    printf("\n A : %d  B : %d",a,b);
    return 0;
}
