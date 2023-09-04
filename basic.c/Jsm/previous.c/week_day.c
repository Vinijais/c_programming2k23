#include<stdio.h>
#include<conio.h>
void main()
{
    int day;
    printf("enter the number of week");
    scanf("%d",&day);
  
    if(day==1)
    printf("mon");
     else if(day==2)
    printf("tue");
      else if(day==3)
    printf("wed");
     else if(day==4)
    printf("thu");
    else if(day==5)
    printf("fri");
     else if(day==6)
    printf("sat");
     else if(day==7)
    printf("sun");
    else
    printf("beta ja kar 1 class me bat ja");
getch();
}