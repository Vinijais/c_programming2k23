#include <stdio.h>
struct student
{
    char name;
    char pid;
    char class;
    float mark;
};
void display(struct student s1);
main()
{
    struct student s;
    printf("enter the student pid:\n");
    scanf("%s", &s.pid);
    printf("enter the student name:\n");
    scanf("%s", &s.name);
    printf("enter the student class:\n");
    scanf("%s", &s.class);
    printf("enter the student marks:\n");
    scanf("%f", &s.mark);
    // s.pid= "22bca012";
    // s.name= "vinit ";
    // s.class="bca";
    // s.mark=67;
 
 
    display(s);
}
void display(struct student s1)
{
    printf("display the record of student");
    printf("%s\n%s\n%s\n%f\n", s1.pid, s1.name, s1.class, s1.mark);
}