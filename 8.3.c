#include <stdio.h>
void func(int*x,int*y) 
{
    *x=*x+10;  
    *y=*y*2;  
}
int main() 
{
    int a=5,b=10;
    printf("Before function call\n");
    printf("a=%d, b=%d\n", a,b);
    func(&a, &b);
    printf("After function call-a=%d, b=%d", a,b);
    return 0;
}
