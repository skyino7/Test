#include <stdio.h>

int main(void)
{
    int a = 20, b = 10, c;
    int sum = 0;
    int *ptr;
    int n = 2;
    int i;

    char string[10] = {'S','c','h','o','o','l','\0'};

    sum = a * b;
    ptr = &a;

    printf("Sum: %d\n", sum);
    printf("Address: %p\n", ptr);

    printf("Bitwise complement of %d: %d\n", n, ~n);

    c = (a < b) ? a : b;
    printf("Conditional Operator: %d\n", c);

    for (i = 0; i < sizeof(string) / sizeof(string[0]); i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");


    return (0);
}