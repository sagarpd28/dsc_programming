#include<stdio.h>

struct student {
    char name[50];
    int roll_num;
    float marks;
};

int main (){

    struct student s1;
    struct student *p = &s1;

    printf("Enter student name :");
    scanf("%s", &s1.name);

    printf("Enter student roll number :");
    scanf("%d", &s1.roll_num);
    
    printf("Enter student marks is :");
    scanf("%f", &s1.marks);

    printf("Student name is %s\n",p->name);
    printf("Student roll num is %d\n",p->roll_num);
    printf("Student marks is %f\n",p->marks);

    return 0;

}

