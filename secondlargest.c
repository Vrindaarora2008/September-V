#include <stdio.h>
int second(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] < arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 1; i < n; i++)
     {
        if (arr[i] != arr[0]) 
        {
            return arr[i];
        }
    }
    return -1;
}
int main() 
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    int result = second(arr, n);
    if (result == -1)
        printf("No second largest element exists\n");
    else
        printf("Second largest element = %d\n", result);
    return 0;
}
