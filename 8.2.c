#include <stdio.h>
int main() 
{
    int a=10;
    float b=10.0;
    char c='A';
    int *p1=&a;
    float *p2=&b;  
    char *p3=&c;
    printf("int*=%p\nfloat*=%p\nchar*=%p\n", (void*)p1, (void*)p2, (void*)p3); 
    p1++; 
    p2++; 
    p3++;
    printf("After increment\n");
    printf("int*=%p\nfloat*=%p\nchar*=%p\n", (void*)p1, (void*)p2, (void*)p3);
    return 0;
}