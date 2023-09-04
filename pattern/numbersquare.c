#include<stdio.h>
int main()
{
    int i,j,rows,column;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of Column:");
    scanf("%d",&column);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=column;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}