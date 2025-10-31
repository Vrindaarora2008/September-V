#include<stdio.h>
int main()
{
FILE*fptr;
int count=0;
fptr=fopen("D:/Document.txt","r");
char str1;
str1=fgetc(fptr);
if(fptr == NULL) 
{
 printf("File could not be opened.\n");
 return 1;
}
if(str1==EOF)
{
    printf("FILE EMPTY");
}
while(str1!=EOF)
{
    if(str1=='a')
    count++;
}
printf("Number of spaces=%d", count);
fclose(fptr);
    return 0;
}