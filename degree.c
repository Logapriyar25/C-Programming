/* PROGRAM 3
Temperature of a city in Fahrenheit degrees is input through the keyboard.Write a program to convert this temperature
into centigrade degree.
                     Formula=(fahrenheit-32)*5/9
 */

 #include<stdio.h>
 int main()
 {
     float fah,centi;
     printf("\nEnter the Fahrenheit degree :");
     scanf("%d",&fah);
     centi=(fah-32)*(5.0/9.0);
     printf("\nCentigrade degree : %0.2f",centi);
     return 0;
 }
