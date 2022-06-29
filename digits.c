/* PROGRAM 7
If a five digit number is input through the keyboard,write a program to calculate the sum of its digit.
(Hint:use the modulus operator'%')
 */

 #include<stdio.h>
 int main()
 {
     int a,b,c,d,e,f,g,h,i,sum=0;
     printf("\nEnter 5 digit no : ");
     scanf("%d",&a);//12345
     b=a/10;//1234
     c=a%10;//5
     sum+=c;//sum=sum+5
     d=b/10;//123
     e=b%10;//4
     sum+=e;
     f=d/10;//12
     g=d%10;//3
     sum+=g;
     h=f/10;//1
     i=f%10;//2
     sum+=i;
     printf("\nTotal : %d",sum);
     return 0;

 }
