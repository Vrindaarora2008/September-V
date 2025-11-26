//main.c
#include <stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);
int main() 
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Add=%d\n", add(a,b));
    printf("Sub=%d\n", sub(a,b));
    printf("Mul=%d\n", mul(a,b));
    printf("Div=%d\n", divi(a,b));
}
