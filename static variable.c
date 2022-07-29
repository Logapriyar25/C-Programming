// Static Variable
/*Static variables are initialized only once. The compiler persists with the variable till the end of the program.
Static variables can be defined inside or outside the function.*/

#include<stdio.h>
void display();
int main()
{
    display();
    display();

}
void display()
{
    static int x=1;
    x++;
    printf("\n x : %d",x);
}
