#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,t;
    printf("enter the table of number");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        t=n*i;
    printf("%d\n",t);
    }
    getch();
}