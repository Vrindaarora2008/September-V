#include <stdio.h>
int main() 
{
    int a=5;
    float b=5.5;
    char c='A';
    int *p1=&a;
    float *p2=&b;
    char *p3=&c;
    printf("Value of a = %d\n", a);
    printf("Value of b = %f\n", b);
    printf("Value of c = %c\n", c);
    printf("Address of a = %p\n", p1);
    printf("Address of b = %p\n", p2);
    printf("Address of c = %p\n", p3);
    printf("Value using pointer *p1 = %d\n", *p1);
    printf("Value using pointer *p2 = %.2f\n", *p2);
    printf("Value using pointer *p3 = %c\n", *p3);
    return 0;
}
