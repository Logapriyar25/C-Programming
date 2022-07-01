/* nested if statement (finding given year is leap year)
if(condition)
{
if(condition)
{
statement;
}
}
*/

int main()
{
    int year;
    printf("\nEnter the leap year : ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("%d is leap year",year);
        }
        else
        {
            printf("%d is not a leap year",year);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("%d is leap year",year);
        }
        else
        {
            printf("%d is not a leap year",year);
        }
    }
    return 0;
}


