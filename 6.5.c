#include <stdio.h>
struct Organisation
{
    char name[50];
    int id,daysWorked,daysAbsent;
    float salary,overtime;
};
struct Contractor
{
    int contractID,duration,delay;
    float amount;
};
int main()
{
    struct Organisation org;
    struct Contractor con;
    printf("Enter employee name\n");
    scanf("%s", &org.name);
    printf("Enter ID\n");
    scanf("%d", &org.id);
    printf("Enter monthly salary\n");
    scanf("%f", &org.salary);
    printf("Days Worked\n");
    scanf("%d", &org.daysWorked);
    printf("Days Absent\n");
    scanf("%d", &org.daysAbsent);
    printf("Overtime Pay:\n");
    scanf("%f", &org.overtime);
    printf("Enter Contract ID\n");
    scanf("%d", &con.contractID);
    printf("Project Duration\n");
    scanf("%d", &con.duration);
    printf("Project Amount\n");
    scanf("%f", &con.amount);
    printf("Delay Days\n");
    scanf("%d", &con.delay);
    float dailyPay=org.salary/30.0;
    float orgIncome=(dailyPay*org.daysWorked)+org.overtime;
    float penalty=(con.delay/10.0)*(con.amount/3.0);
    float conIncome=con.amount-penalty;
    float total=orgIncome+conIncome;
    printf("\nIncome from Organisation=%f\n", orgIncome);
    printf("Income from Contract=%f\n", conIncome);
    printf("Total Income=%f\n", total);
    return 0;
}
