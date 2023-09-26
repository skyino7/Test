#include <stdio.h>

int func(int a, int b)
{
    return a + b * (a - b);
}

int main(void)
{
    int sum = 0;
    sum = func(10, 20);

    printf("Result: %d\n", sum);

    return (0);
}