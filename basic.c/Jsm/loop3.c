#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,t;
      for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            t=j*i;
            printf("%d\t",t);
        }
        printf("\n");
    }
    getch();
}