/* Arithmetic Operator
    *  /  %   +  -
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nEnter 2 Nos : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal : %d",c);
    c=a-b;
    printf("\ndifference : %d",c);
    c=a*b;
    printf("\nmul : %d",c);
    c=a/b;
    printf("\ndiv : %d",c);
    c=a%b;
    printf("\nmod : %d",c);
    return 0;
}
