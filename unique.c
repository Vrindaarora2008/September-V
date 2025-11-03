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
        scanf("%d", &arr[i]);
        printf(" ");
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
        if(i!=j && arr[i]==arr[j])
        {
            count++;
            break;
        }
        }
     if(count==0)
        {
            printf("These numbers have no duplicate-");
            printf(" ");
            printf("%d\n", arr[i]);
        }
        else
        {
            printf("Duplicated %d\n", arr[i]);
        }
    }
    return 0;
}