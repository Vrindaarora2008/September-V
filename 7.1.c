#include <stdio.h>
struct Complex 
{
    float real;
    float imag;
};
int main() 
{
    float s=0,d=0;
    struct Complex c1,c2,sum,diff;
    printf("Enter real part of first complex number\n");
    scanf("%f", &c1.real);
    printf("Enter imaginary part of first complex number\n");
    scanf("%f", &c1.imag);
    printf("Enter real part of second complex number\n");
    scanf("%f", &c2.real);
    printf("Enter imaginary part of second complex number\n");
    scanf("%f", &c2.imag);
    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;
    diff.real=c1.real-c2.real;
    diff.imag=c1.imag-c2.imag;
    s=sum.real+sum.imag;
    d=diff.real-diff.imag;
    printf("Sum=%f\n", s); 
    printf("Difference=%f\n", d);
    return 0;
}
