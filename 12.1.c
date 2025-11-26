#include <stdio.h>
#define PI 3.14      
int main() 
{
    printf("Value of PI = %f\n", PI);
    float r, area;
    printf("Enter radius of circle\n");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of circle = %f\n", area);
    return 0;
}
