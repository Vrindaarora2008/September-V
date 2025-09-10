#include<stdio.h>
int main()
{
    int arr[5];
for(int a=0;a<5;a++)
{
    scanf("%d", &arr[a]);
}
printf("Array in reverse is-");
for(int i=5-1;i>=0;i--)
{
printf("%d", arr[i]);
printf(" ");
}
    return 0;
}