#include<stdio.h>
int main()
{
    int i , j, n;
    printf("Enter the number of rows:- ");
    scanf("%c",&n);
    for(i=1;i<=n;i++)
    {
        int d =1;
        for(j=1;j<=n;j++)
        {
            int d = d + 64;
            char ch = (char)d;
            printf(" %c ",ch);
        }
        printf("\n");
    }
    return 0;
}