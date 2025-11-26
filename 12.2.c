#include <stdio.h>
#define SQUARE(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))
#define AREA_CIRCLE(r) (3.14*(r)*(r))
int main() 
{
    int num;
    int choice;
    printf("Enter 1 for Square, 2 for Cube, 3 for Area of Circle\n");
    scanf("%d", &choice);
    printf("Enter number\n");
    scanf("%d", &num);
    if(choice==1) 
    {
        printf("Square=%d\n", SQUARE(num));
    }
    else if(choice==2) 
    {
        printf("Cube=%d\n", CUBE(num));
    }
    else if(choice==3) 
    {
        printf("Area of circle = %.2f\n", AREA_CIRCLE(num));
    }
    else 
    {
        printf("Invalid choice!\n");
    }
    return 0;
}
