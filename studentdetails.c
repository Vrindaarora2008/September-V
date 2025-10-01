#include <stdio.h>
struct student
 {
    int roll;
    char name[50];
    float marks;
};
void input(struct student *s) 
{
    printf("Enter roll number\n");
    scanf("%d", &s->roll);
    printf("Enter name\n");
    scanf(" %[^\n]", s->name);
    printf("Enter marks\n");
    scanf("%f", &s->marks);
}
void display(struct student s) 
{
    printf("Student Details:\n");
    printf("Roll Number-%d\n", s.roll);
    printf("Name-%s\n", s.name);
    printf("Marks-%f\n", s.marks);
}
int main() 
{
    struct student s1;
    input(&s1);
    display(s1);
    return 0;
}
