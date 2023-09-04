#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the any number : ");
    scanf("%d",&n);

    for(i=3; i<n; i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum = sum +i;
        }
    }
            printf("%d",sum);

getch();
}