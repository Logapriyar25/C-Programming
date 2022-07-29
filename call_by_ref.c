
//Call by reference function in C programming

/*While calling a function, we pass values of variables to it. Such functions are known as “Call By Values”. 
While calling a function, instead of passing the values of variables, we pass address of variables(location of variables) 
to the function known as “Call By References.
*/

#include<stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("\nEnter the value of A & B :");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap A : %d  |  B : %d",a,b);
    swap(&a,&b);
    printf("\nAfter Swap A : %d  |  B : %d",a,b);
    return 0;
}
