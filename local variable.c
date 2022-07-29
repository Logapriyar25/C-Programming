//Local Variable
//In C programming language, variables defined within some function are known as Local Variables.
//example:

/*#include <stdio.h>

void main()
{
    // Local variable
    int a = 10;
    printf("Printing in main %d", a);
}

void fun()
{
    // compilation error, because a is local to main and
    // cannot be accessed from inside this function.
    printf("Printing in fun %d", a);
}*/
#include <stdio.h>

int main()
{
	int a = 10;
	int b= 20;
	printf("%d",a);
	return 0;
}

// Global Variables

 //variables which are defined outside of function block and are accessible to entire program are known as Global Variables.

 #include <stdio.h>

// global variable
int a = 10;

void main()
{
    printf("Priniting in main %d", a);
}

void fun()
{
    printf("printing in fun %d", a);
}
