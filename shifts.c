#include <stdio.h>
int main() 
{
    int num, left, right, n;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Enter number of positions to shift\n");
    scanf("%d", &n);
    left=num << n;   
    right=num >> n;  
    printf("%d << %d = %d\n", num, n, left);
    printf("%d >> %d = %d\n", num, n, right);
    return 0;
}
