#include<stdio.h>
int main()
{
int n,x=0,y=0,z=0;
char ch;
printf("DO YOU WANT TO CAST A VOTE?\n" );
scanf("%d", ch);
while(ch=='Y')
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
if(n==10)
{
printf("DONE");
break;
}
default:
printf("Invalid");
break;
}
printf("DO YOU WANT TO CAST ANOTHER VOTE?\n");
scanf("%d", &ch);
}
    return 0;
}