#include <stdio.h>

typedef struct Book
{
    float fee;
    int ID;
} Book1;

int main(void)
{
    Book1 book;

    book.fee = 45000.00;
    book.ID = 1208;

    printf("Book Fee: %.2f\n", book.fee);
    printf("Auth ID: %d\n", book.ID);

    return (0);
}
