#include<stdio.h>
int main()
{
	int a=10;
	int b=010; //octal value 010=8(decimal value)
	int c=0x41; //hexa 41=65(A)
	char d='A';
	float e=234.25f;
	float f=234e-2;
	printf("%d \n%d \n%d \n%c \n%f \n%0.2f",a,b,c,d,e,f);
	return 0;
}