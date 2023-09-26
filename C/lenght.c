#include <stdio.h>

int len(char *letters)
{
    int i = 0;

    while (letters[i] != '\0')
        i++;

    return (i);

}

int main(void)
{
    char words[] = "Programming is Fun!";

    printf("Number of words: %d\n", len(words));

    return (0);
}