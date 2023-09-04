#include<stdio.h>
#include<conio.h>
void large( int,int);
void main()
{
    int a,b;
    printf("enter any two number");
    scanf("%d%d",&a,&b);
    large(a,b);
    getch();
}
void large(int x,int y)
{
    if (x>y)
    printf("a");
    else
    printf("b");
}