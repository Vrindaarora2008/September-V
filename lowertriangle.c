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
    printf("The matrix is\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d\t", arr[i][j]);
}
printf("\n");
}
    for (int i=0;i<3;i++) 
    {
        for (int j=0;j<=i;j++) 
        {
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of the lower triangular matrix is: %d\n", sum);
    return 0;
}