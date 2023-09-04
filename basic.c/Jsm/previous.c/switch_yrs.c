#include<stdio.h>
#include<conio.h>
void main()
{
    int month;
    printf("enter the number of month ");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
    printf("january");
    break;
    case 2:
    printf("febuary");
    break;
    case 3:
    printf("march");
    break;
    case 4:
    printf("april");
    break;
    case 5:
    printf("may");
    break;
    default:
    printf("beta padh lo");
    }
    getch();
}