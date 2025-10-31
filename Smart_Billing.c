//Smart Billing
//Create arrays to store item names and prices
#include<stdio.h>
int main()
{
    char names[5];
    for(int i=0;i<5;i++)
    {
      scanf("%s\n", names[i]);
    }
    printf("The items in the menu are-\n");
    for(int j=0;j<5;j++)
    {
        printf("%s\t", names[j]);
        printf("\n");
    }
    float prices[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d\n", &prices[i]);
    }
   printf("The prices of the items are-\n");
   for(int i=0;i<5;i++)
   {
    printf("%d\t", prices[i]);
    printf("\n");
   }
   int codes[5];
   for(int i=0;i<5;i++)
   {
    scanf("%d\n", &codes[i]);
   }
   printf("The item codes are-\n");
   for(int i=0;i<5;i++)
   {
    printf("%d\t", codes[i]);
    printf("\n");
   }
   int quantity,choice;
   printf("Kindly enter your choice\n");
   scanf("%d", &choice);
   for(int i=0;i<5;i++)
   {
    if(choice==codes[i])
    {
        printf("Valid item chosen");
    }
    else
    {
        printf("This item is not available");
    }
   }
   printf("\nEnter the quantity");
   scanf("%d\n", &quantity);
   char ch;
   printf("Dear customer, are you sure? If yes, enter yes. Else, enter no\n");
   scanf("%c", &ch);
    return 0;
}
   