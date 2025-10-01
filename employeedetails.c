#include <stdio.h>
struct employee
 {
    int id;
    char name[50];
    float basic,DA,HRA,gross;
};
void input(struct employee *e)
 {
    printf("Enter Employee ID\n");
    scanf("%d", &e->id);
    printf("Enter Name\n");
    scanf(" %[^\n]", e->name); 
    printf("Enter Basic Pay\n");
    scanf("%f", &e->basic);
    printf("Enter DA\n");
    scanf("%f", &e->DA);
    printf("Enter HRA\n");
    scanf("%f", &e->HRA);
}
void calculate(struct employee *e) 
{
    e->gross=e->basic+e->DA+e->HRA;
}
void display(struct employee e) 
{
    printf("Employee Details:\n");
    printf("ID-%d\n", e.id);
    printf("Name-%s\n", e.name);
    printf("Basic Pay-%f\n", e.basic);
    printf("DA-%f\n", e.DA);
    printf("HRA-%f\n", e.HRA);
    printf("Gross Salary-%f\n", e.gross);
}
int main() 
{
    struct employee emp;
    input(&emp);
    calculate(&emp);
    display(emp);
    return 0;
}
