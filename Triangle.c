#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter side 1\n");
scanf("%d", &a);
printf("Enter side 2\n");
scanf("%d", &b);
printf("Enter side 3\n");
scanf("%d", &c);
if(a==b==c)
{
    printf("EQUILATERAL TRIANGLE");
}
else if(a==b || b==c || a==c)
{
    printf("ISOSCELES");
}
else
{
    printf("SCALENE");
}
    return 0;
}