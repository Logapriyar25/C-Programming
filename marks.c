/* PROGRAM 3
If the marks obtained by a student in 5 different subjects are input through the keyboard, find out the aggregate marks and
percentage marks obtained by the student.Assume that the max marks that can be obtained by a student in each subject is 100.
*/

#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,Total;
    float avg;
    printf("\nEnter 5 marks :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    Total=m1+m2+m3+m4+m5;
    avg=Total/5;
    printf("\nTotal : %d",Total);
    printf("\nAverage : %0.2f",avg);
    return 0;
}
