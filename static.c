#include<stdio.h>
void func()
{
    static int x = 5;
    x++;
    printf("%d\n", x);
}
int main()
{
    func();
    func();
    return 0;
}