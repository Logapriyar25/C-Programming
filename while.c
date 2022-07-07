/*  Looping Statement

    1.Entry Check Loop
        While
        For
    2.Exit Check Loop
        do while

while(condition)
{
    ----
    ----
    ----
}
*/

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter the limit : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}




