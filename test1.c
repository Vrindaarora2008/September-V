#include<stdio.h>
int main()
{
int sum=0,dig,temp=0;
for(int i=1;i<=1000;i++)
{
temp=i;
    while(temp>0)
    {
        dig=temp%10;
        sum=sum+(dig*dig*dig);
        temp=temp/10;
    }
if(sum==i)
{
    printf("Number is Armstrong-%d\n", sum);
}
else
{
    printf("Not Armstrong\n");
}
}
return 0;
}