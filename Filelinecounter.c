#include<stdio.h>
int main()
{
FILE*fptr;
int count=0;
fptr=fopen("D:/Document.txt","r");
char str1;
str1=fgetc(fptr);
while(str1!=EOF)
{
    if(str1=='\n')
    count++;
}
printf("Number of lines=%d", count);
fclose(fptr);
    return 0;
}