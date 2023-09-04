#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float i,n,sum=0;
    printf("enter any number");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    sum=sum + sqrt(i);
    printf("sum=%f",sum);
    getch();
}