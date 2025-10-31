#include <stdio.h>
int main() 
{
    FILE *fp;
    int count = 0;
    fp = fopen("count.txt", "r");
    if (fp == NULL) 
    {
        count = 1;
    } 
    else
     {
        fscanf(fp, "%d", &count);
        count++; 
        fclose(fp);
    }
    printf("This is execution no. %d\n", count);
    fp = fopen("count.txt", "w");
    fprintf(fp, "%d", count);
    fclose(fp);
    return 0;
}
