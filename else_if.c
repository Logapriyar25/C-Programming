/* else if statement
if(condition)
{
statement;
}
else if(condition)
{
statement;
}
else
{
statement;
}  */

int main()
{
    int a;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    if(a<0)
    {
        printf("\n %d is Negative Value :",a);
    }
    else if(a==0)
    {
        printf("The Given Value is Zero");
    }
    else if(a>0)
    {
        printf("\n %d is Positive Value :",a);
    }
    return 0;
}



