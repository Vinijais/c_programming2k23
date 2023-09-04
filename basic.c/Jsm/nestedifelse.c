#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter nay three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a is greater");
    else if(b>a&&b>c)
    printf("bis greater");
    else 
    printf("c is greater");
    return 0;

}