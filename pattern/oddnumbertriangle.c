#include<stdio.h>
int main()
{
    int i,j=1,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)
    {
        for(j=1;j<=i;j=j+2)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}