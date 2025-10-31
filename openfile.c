#include<stdio.h>
int main()
{
FILE*fptr;
fp=fopen("Document.txt", "r");
char ch;
if(fp==NULL)
{
printf("FILE DOESN'T EXIST");
}
else
{
ch=fgets(fp);
if(ch==EOF)
{
    printf("FILE EMPTY");
}
else
{
    printf("FILE CONTAINS TEXT");
}
}
    return 0;
}