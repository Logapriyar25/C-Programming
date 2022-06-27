/* PROGRAM 2
The distance between two cities (in km.)is input through the keyboard.Write a program to convert and
print this distance in meters, feet, inches and centimeters.
*/

#include<stdio.h>
int main()
{
    float km,m,ft,cm,inch;
    printf("\nEnter the Kilometer :");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("\nKM : %0.2f",km);
    printf("\nM : %0.2f",m);
    printf("\nCM : %0.2f",cm);
    printf("\nINCHES : %0.2f",inch);
    printf("\nFEET : %0.2f",ft);
    return 0;

}
