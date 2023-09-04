#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j = n; j>=1; j--)
        {
            for(int k = 1; k <= i; k++)
            {
                printf(" ");
            }
            printf("      * ");
        }
        printf("\n");
    }
    return 0;
}