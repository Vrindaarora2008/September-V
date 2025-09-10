#include<stdio.h>
int main()
{
int n,avg,sum=0;
printf("Enter size of array\n");
scanf("%d", &n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
}
avg=sum/n;
printf("The average is-%d", avg);
    return 0;
}