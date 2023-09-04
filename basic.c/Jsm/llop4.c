#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,t=1;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=t*i;
        printf("%d\n",t);
    }
    getch();
}