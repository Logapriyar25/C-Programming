/* PROGRAM 12
If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
write a program to find the cost price of one item.
*/

#include<stdio.h>
int main()
{
    float sp,p,cp;
    printf("\nEnter the Selling Price of 15 items : ");
    scanf("%f",&sp);
    printf("\nEnter the profit : ");
    scanf("%f",&p);
    cp=(sp-p)/15;
    printf("\nThe cost price of 1 item is Rs.%0.2f :",cp);
    return 0;
}
