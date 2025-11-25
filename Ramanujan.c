#include <stdio.h>
int main()
{
    int limit;
    printf("Enter the limit\n");
    scanf("%d", &limit);
    for (int n = 1; n <= limit; n++)
     {
        int count = 0;
        for (int a = 1; a*a*a < n; a++) 
        {
            for (int b = a; b*b*b < n; b++) 
            {
                if (a*a*a + b*b*b == n) 
                {
                    count++;
                }
            }
        }
        if(count==2)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}
