#include <stdio.h>
struct book 
{
    int book_id;
    char title[100];
    char author[100];
    float price;
};
void display (struct book b);
int main() 
{
    struct book b1;
    printf("Enter Book ID\n");
    scanf("%d", &b1.book_id);
    getchar(); 
    printf("Enter Book Title\n");
    fgets(b1.title, sizeof(b1.title), stdin);
    printf("Enter name of author\n");
    fgets(b1.author, sizeof(b1.author), stdin);
    printf("Enter Price\n");
    scanf("%f", &b1.price);
    display(b1);
    return 0;
}
void display(struct book b) 
{
    printf("Book ID-%d\n", b.book_id);
    printf("Title-%s", b.title);
    printf("Author-%s", b.author);
    printf("Price-%f\n", b.price);
}
