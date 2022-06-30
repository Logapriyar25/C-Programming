/* PROGRAM 11
A cashier has currency notes of denominations 10, 50 and 100. if the amount to be withdrawn is input through the keyboard in
hundreds. find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
*/
#include<stdio.h>
int main()
{
    int amt;
    printf("\nEnter the amount to withdraw : ");
    scanf("%d",&amt);//1275
    printf("\n Required notes of Rs.100:%d",(amt/100));
    printf("\n Required notes of Rs.50 :%d",(amt%100)/50);
    printf("\n Required notes of Rs.10 :%d",((amt%100)%50)/10);
    printf("\n Amount still remaining  :%d",((amt%100)%50)%10);
    return 0;

}

