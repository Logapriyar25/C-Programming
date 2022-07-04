/* Write a program of the following output using switch case  (using goto label)
   MENU CARD
     1.COFFEE           Rs.15
     2.TEA              Rs.10
     3.COLD COFFEE      Rs.25
     4.MILK SHAKE       Rs.50

    Enter Your choice : 2

    you have selected tea
    Enter the quantity : 5
    Total amount : 50
*/

#include<stdio.h>
int main()
{

 int ch,qty,i,net=0;
 waiter:
 printf("\n\tMENU CARD");
 printf("\n\t\t1.COFFEE        Rs.15");
 printf("\n\t\t2.TEA           Rs.10");
 printf("\n\t\t3.COLD COFFEE   Rs.25");
 printf("\n\t\t4.MILK SHAKE    Rs.50");
 printf("\n\nEnter Your Choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
    printf("\nYou have selected Coffee");
    printf("\nEnter the Qty : ");
    scanf("%d",&qty);
    //printf("\nTotal Amount : %d",(qty*15));
    net=net+(qty*15);
    break;
    case 2:
    printf("\nYou have selected Tea");
    printf("\nEnter the Qty : ");
    scanf("%d",&qty);
    //printf("\nTotal Amount : %d",(qty*10));
    net=net+(qty*10);
    break;
    case 3:
    printf("\nYou have selected Cold Coffee");
    printf("\nEnter the Qty : ");
    scanf("%d",&qty);
    //printf("\nTotal Amount : %d",(qty*25));
    net=net+(qty*25);
    break;
    case 4:
    printf("\nYou have selected Milk Shake");
    printf("\nEnter the Qty : ");
    scanf("%d",&qty);
    //printf("\nTotal Amount : %d",(qty*50));
    net=net+(qty*50);
    break;
    default:
        printf("\nInvalid Product Selection");

 }
 printf("\nDo you want to continue press 1:");
 scanf("%d",&i);
 if(i==1)
 {
     goto waiter;
 }
 printf("\nTotal Amount : %d",net);
 printf("\nThank You Come Again");
 return 0;
}
