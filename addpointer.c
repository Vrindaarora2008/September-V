#include <stdio.h>
int main() 
{
    int a,b,sum;
    int *ptr1,*ptr2;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("Sum=%d\n",sum);

    return 0;
}
