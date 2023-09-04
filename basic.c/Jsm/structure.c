#include<stdio.h>
struct student
{
    char pid[10];
    char name[12];
    char cl[12];
    float mark;
};
void main()
{
    struct student s;
    printf("enter the student pid:\n");
    scanf("%s",&s.pid);
       printf("enter the student name:\n"); 
           scanf("%s",&s.name);
         printf("enter the student class:\n");
             scanf("%s",&s.cl);
            printf("enter the student marks:\n");
                scanf("%f",&s.mark);
    printf("display the record of student:\n");
    printf("%s\n%s\n%s\n%f\n",s.pid,s.name,s.cl,s.mark);
    getch();
}