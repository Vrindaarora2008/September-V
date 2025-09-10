#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("The array is-");
    for(int i=0;i<n;i++)
    {
        scanf("%i", &arr[i]);
        printf(" ");
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        if(arr[i]==arr[j])
        {
            count++;
            printf("Duplicate count is-%d", &count);
        }
        }
     if(count==0)
        {
            printf("These numbers have no duplicate-");
            printf(" ");
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}