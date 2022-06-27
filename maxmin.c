#include<stdio>
#include<limits.h>
#include<float.h>
int main()
{
	//Integer
	printf("\nShort int %u Bytes %d to %d",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("\nunsigned Short int %u Bytes 0 to %d",sizeof(unsigned short int),USHRT_MAX);
	printf("\nunsigned int %u Bytes 0 to %u",sizeof(unsigned int),UINT_MAX);
	printf("\nlong int %u Bytes %ld to %ld",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("\nunsigned long int %u Bytes 0 to %d",sizeof(unsigned long int),ULONG_MAX);	
	
	//Character
	printf("\ncharacter %u bytes %d to %d",sizeof(char),CHAR_MIN,CHAR_MAX);
	printf("\ncharacter %u bytes 0 to %d",sizeof(unsigned char),UCHAR_MAX);
	
	//Float
	printf("\nFloat %u bytes",sizeof(float));
	printf("\nDouble %u bytes",sizeof(double));
	printf("\nLong Double %u bytes",sizeof(long double));
	return 0;
}