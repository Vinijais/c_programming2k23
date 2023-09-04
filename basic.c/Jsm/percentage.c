#include<stdio.h>
int main()
{
    float a,c,b,d,e;
    printf("enter five subject");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    printf("percentage=%.2f",(a+b+c+d+e)/100);
    return 0;
}