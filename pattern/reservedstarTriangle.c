#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" *");
        }    /* code */
        printf("\n");
    }
    return 0;
}