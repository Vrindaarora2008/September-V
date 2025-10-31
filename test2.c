#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%7==0)
        {
            printf("Multiplr of 7-%d\n", i);
        }
        if(i%5==0)
        {
            continue;
        }
    }
    return 0;
}