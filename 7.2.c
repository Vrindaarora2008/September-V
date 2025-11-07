#include <stdio.h>
struct Employee 
{
    char employee_sname[50];
    float basic_pay;
    float da;
    float gross_salary;
};
int main() 
{
    struct Employee emp[100];
    int n;
    printf("Enter number of employees\n");
    scanf("%d", &n);
    for(int i=0;i<n;i++) 
    {
        printf("Enter name of employee-%d\n", i+1);
        scanf("%s", emp[i].employee_sname);
        printf("Enter basic pay of-%s\n", emp[i].employee_sname);
        scanf("%f", &emp[i].basic_pay);
        emp[i].da=(52/100)*emp[i].basic_pay;
        emp[i].gross_salary=emp[i].basic_pay+emp[i].da;
    }
    printf("Employee Name\tGross Salary\n");
    for(int i=0;i<n;i++) 
    {
        printf("%s\t%f\n", emp[i].employee_sname, emp[i].gross_salary);
    }
    return 0;
}
