// Break & Continue

#include<stdio.h>
int main()
{
    int i,n,num,sum=0;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        continue;
        if(i==8)
            break;
        printf("\n%d",i);

    }

    printf("\nEnter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the number : ");
        scanf("%d",&num);
        if(num==0)
            continue;
        sum+=num;
    }
    printf("\nTotal : %d",sum);
    return 0;
}
