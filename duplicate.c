#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("The array is- ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
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
        }
        else
        {
            printf("NO DUPLICTAES");
            break;
        }
        }
    }
    printf("No. of duplicated elements=%d", count);
    return 0;
}