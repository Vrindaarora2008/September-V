#include <stdio.h>
void sort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++)
     {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void print(int arr[], int n)
 {
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    sort(arr, n);
    printf("Sorted arrayis-\n");
    print(arr, n);
    return 0;
}
