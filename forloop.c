// For Loop

#include<stdio.h>
int main()
{
    int i,n;
    printf("\nEnter the limit :");
    scanf("%d",&n);
    for(i=0;i<=n;i+=2)
    {
        printf("\n%d",i);
    }
    return 0;
}
