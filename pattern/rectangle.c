#include<stdio.h>
int main()
{
    int i,j,rows,column;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of Column:");
    scanf("%d",&column);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}