#include <stdio.h>
union student
{
    char pid[10];
    char name[12];
    char class[12];
    float mark;
};
 void main()
{
    union student s[5];
    int i, j;
    printf("display the record of student\n");

    for (i = 1; i <= 5; i++)
    {
        printf("enter the student pid:\n");
        scanf("%s", &s[i].pid);
        printf("enter the student name:\n");
        scanf("%s", &s[i].name);
        printf("enter the student class:\n");
        scanf("%s", &s[i].class);
        printf("enter the student marks:\n");
        scanf("%f", &s[i].mark);
    }

    for (j = 1; j <= 5; j++)
    {
        printf("%s\n%s\n%s\n%f\n", s[j].pid, s[j].name,s[j].class,s[j].mark);
    }
    getch();
}