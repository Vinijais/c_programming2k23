#include<stdio.h>
struct student 
{
    char pid[20];
    char name[20];
    char cl[20];
    float mark;
};

int main()
{
    struct student s;
    struct student *ptr;

    ptr = &s;

    (*ptr).pid = "22BCA012";
    (*ptr).name = "vinit kumar";
    (*ptr).cl = "BCA";
    (*ptr).mark = 78;
    printf("%s\n%s\n%s\n%f",(*ptr).pid,(*ptr).name,(*ptr).cl,(*ptr).mark);
    return 0;

}

/*{
    struct student s;
    struct student *ptr;


}
*/