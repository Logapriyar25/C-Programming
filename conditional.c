/* Conditional Operator Statement
Ternary Operator in C is an operator which takes three operands or variables, unlike the other operators which take one or two operands.
Ternary operator in C is also known as Conditional Operator. It is a way to shorten the simple if-else code of the block.
condition ? true-statement : false-statement;
*/
int main()
{
    int a,b,c;
    printf("\nEnter the value of A and B :");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("\nThe Greatest No is %d",c);
    return 0;
}
