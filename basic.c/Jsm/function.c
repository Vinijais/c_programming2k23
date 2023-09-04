#include<stdio.h>
#include<conio.h>
int bodmas(int,int);
{
    int a,b,c;
    printf("enter any two number");
    scanf("%d%d",&a,&b);
    c=bodmas(a,b);
    printf("addiion=%d",c);
    return 0;
}
int bodmas(int x, int y)
{
    int m;
    m=x+y;
    printf("%d",m);
}
