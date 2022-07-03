/* A library charges a fine for every book returned late.for first 5 days the fine is 50 paise,for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees.if you return the book after 30 days your membership will be canceled.write a program to accept the
number of days the member is late to return the book and display the fine or the appropriate message.
*/

#include<stdio.h>
int main()
{
    int days;
    printf("\nEnter the days :");
    scanf("%d",&days);
    if(days>=1&&days<=5)
    {
        printf("\nThe fine amount is 0.50 paise");
    }
    else if(days>=6&&days<=10)
    {
        printf("\nThe fine amount is one rupee");
    }
    else if(days>=11&&days<=29)
    {
        printf("\nThe fine amount is five rupees");
    }
    else
    {
        printf("\nMembership canceled");
    }
    return 0;

}
