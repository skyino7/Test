#include <stdio.h>

#define AGE 18

int main(void)
{
    #ifdef AGE
        printf("Age is %d\n", AGE);
    #else
        printf("Not Defined\n");
    #endif

    return 0;
}


