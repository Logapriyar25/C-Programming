// Write a program to find the given character is vowels or not using switch case

#include<stdio.h>
int main()
{
    int ch;
    printf("\nEnter the Character : ");
    scanf("%c",&ch);
    switch(ch)
    {
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("%c is a vowel",ch);
    break;
default:
    printf("%c is not a vowel",ch);
    break;
    }
    return 0;

}
