#include <stdio.h>
int main()
 {
    int sum = 0;
    int arr[3][3];
    printf("Input the values\n");
    for (int i=0;i<3;i++) 
    {
        for (int j=0;j<3;j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0;i<3;i++) 
    {
        for (int j=i;j<3;j++) 
        {
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of the upper triangular matrix is: %d\n", sum);
    return 0;
}
