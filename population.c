/* PROGRAM 10
In a town, the percentage of men is 52. The percentage of total literacy is 48.If total %age of literate men is 35 of the total
population. write a program to find the total number of illiterate men and women if the population of the town is 80,000.
*/

#include<stdio.h>
int main()
{
    int pop=80000,popmen,popwomen,poplit,litmen,litwomen,ilitmen,ilitwomen,popilit;
    popmen=(52*pop)/100;
    popwomen=pop-popmen;
    poplit=(48*pop)/100;
    litmen=(35*pop)/100;
    litwomen=pop-litmen;
    ilitmen=pop-litmen;
    ilitwomen=pop-litwomen;
    popilit=pop-poplit;

    printf("\nTotal population          :%d",pop);
    printf("\nTotal Mens                :%d",popmen);
    printf("\nTotal Womens              :%d",popwomen);
    printf("\nTotal literate men        :%d",litmen);
    printf("\nTotal literate women      :%d",litwomen);
    printf("\nTotal literacy            :%d",poplit);
    printf("\nTotal illiterate men      :%d",ilitmen);
    printf("\nTotal illiterate women    :%d",ilitwomen);
    printf("\nTotal illiteracy          :%d",popilit);

    return 0;


}
