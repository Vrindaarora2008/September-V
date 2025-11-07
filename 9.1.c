#include <stdio.h>
int main() 
{
    FILE *fp;
    char text[100];
    fp = fopen("newfile.txt", "w");
    if (fp==NULL) 
    {
        printf("ERROR!\n");
        return 1;
    }
    printf("Enter text to write\n");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    printf("Text writtem\n");
    fclose(fp);
    return 0;
}
