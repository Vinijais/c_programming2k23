#include<stdio.h>
#include<conio.h>
void main()
{
    int num, i,sum=0, avg;
    for(i=1; i<=10; i++)
    {
        printf("Enter Number %d :",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("Sum = %d\n",sum);
    avg = sum/10;
    printf("avg = %d ",avg);
    getch();
}