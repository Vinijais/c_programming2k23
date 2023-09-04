#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e,f;
    printf("enter thr marks of subject");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
f=(a+b+c+d+e)/5;
printf("average=%.2f\n",f);
if(f<=100&&f>=90)
printf("A");
else if (f<=89&&f>=80)
printf("B");
else if (f<=79&&f>=70)
printf("C");
else if (f<=69&&f>=60)
printf("D");
else
printf("E");
getch();
}
