/*Q84: Convert a lowercase string to uppercase without using built-in functions.
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO
*/
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter any string\n");
    scanf("%s", str);
    int i=0;
while(str[i]!='\0') 
{
        if(str[i] >= 'a' && str[i] <= 'z')
        {
        str[i] = str[i] - 32;  
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;  
        }
        i++;
    }
    printf("Converted: %s", str);
    return 0;
}