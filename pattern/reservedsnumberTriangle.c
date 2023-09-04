#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 0; j <= n-i; j++)
        {
            printf(" %d",i);/* code */
        }
        printf("\n");
    }
    return 0;
}