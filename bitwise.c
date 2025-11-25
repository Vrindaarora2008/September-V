#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Bitwise AND=%d\n", a & b);
    printf("Bitwise OR=%d\n", a | b);
    printf("Bitwise NOT=%d\n", ~a);
    printf("Bitwise NOT=%d\n", ~b);
    return 0;
}
