#include <stdio.h>
int main()
{
    int month;
    printf("enter month number (1-12)");
    scanf("%d", &month);
    switch (month)
    {
        
    case 1:
        printf("jan");
    break;
case 2:
    printf("feb");
    break;
     case 3:
        printf("march");
    break;
case 4:
    printf("april");
    break;
    default:
    printf("fake ");
    }
    return 0;
}