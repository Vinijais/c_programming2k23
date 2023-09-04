#include<stdio.h>
int main()
{
    int a,b,c;
    int ch;
    printf("enter any two number and between 1 to 4");
    scanf("%d%d%d",&a,&b,&ch);

    switch(ch)
    {
        case 1: c=a+b;
        printf("output=%d",c);
        break;
         case 2: c=a-b;
        printf("output=%d",c);
        break;
         case 3: c=a*b;
        printf("output=%d",c);
        break;
         case 4: c=a/b;
        printf("output=%d",c);
        break;
    
    
   default:
        printf("wrong statement");
    }
    return 0;
}