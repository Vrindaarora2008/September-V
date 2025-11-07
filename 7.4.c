#include <stdio.h>
#include <string.h>
union Address 
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};
int main() 
{
    union Address addr;
    printf("Enter present address\n");
    fgets(addr.hostel_address, sizeof(addr.hostel_address), stdin);
    printf("Present address is-%s", addr.hostel_address);
    return 0;
}
