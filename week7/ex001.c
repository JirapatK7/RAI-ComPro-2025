#include <stdio.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        float discount;

    }
    book1;

    printf("Enter the name of the book: ");
    scanf("%49s", book1.name);
    printf("Enter the price of the book: ");
    scanf("%f", &book1.price);
    book1.discount = 0.1*book1.price; 
    printf("Book Details:\n");
    printf ("\n\nBook : %s\n",book1.name);
    printf("Price: %.2f\n", book1.price);
    printf("Discount: %.2f\n", book1.discount);
    printf("Final price: %.2f\n", book1.price - book1.discount);
        
    return 0;
}