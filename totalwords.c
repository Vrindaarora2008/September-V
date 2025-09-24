#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int totalwords=0;
  	printf("Enter any String\n");
	fgets(str, sizeof(str), stdin);
  	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("The Total Number of Words in this String= %d",totalwords);
  	return 0;
}