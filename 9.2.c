#include <stdio.h>
int main() 
{
    FILE *fp;
    char ch;
    fp = fopen("name.txt", "r"); 
    if (fp==NULL) 
    {
        printf("File doesn't exist\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF) 
    {
        putchar(ch); 
    }
    fclose(fp);
    return 0;
}
