#include <stdio.h>

int main(void)
{
    int arr[20];
    int i = 0;
    size_t size;

    arr[1] = 20;
    arr[19] = 1000;

    size = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < size; i++)
    {
        printf("Array Position %d : %d\n", i, arr[i]);
    }

    return 0;
}
