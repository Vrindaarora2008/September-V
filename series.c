#include<stdio.h>
int main()
{
float n;
printf("Enter the value\n");
scanf("%f", &n);
float sum=0.0;
for(float i=1.0;i<=n;i++)
{
    sum=sum+(1/i);
}
printf("The sum is-%f\n", sum);
    return 0;
}