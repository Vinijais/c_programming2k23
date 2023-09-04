#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any two number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap=%d\n%d6",a,b);
  
    return 0;
}