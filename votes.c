#include<stdio.h>
int main()
{
int n,x=0,y=0,z=0,vote;
printf("Enter vote\n");
scanf("%d", &vote);
while(vote!=10)
{  
printf("Enter candidate no.\n");
scanf("%d", &n);
switch(n)
{
    case 1:
    x=x+1;
    printf("%d",x);
break;
case 2:
    y=y+1;
    printf("%d",y);
break;
case 3:
    z=z+1;
    printf("%d",z);
break;
case 10:
printf("VOTING STOPPED\n");
return 0;
default:
printf("Invalid");
break;
}
}
    return 0;
}