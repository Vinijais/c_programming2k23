#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int a,b;
    printf("enter any two number");
    scanf("%d",&a);
   b= fact(a);
   printf("factorial=%d",b);
    getch();
}
int fact(int x)

{
    int i,n=1;
    for(i=1;i<=n;i++)
    {
        n=n*i;
    }
return (n);
}