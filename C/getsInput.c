#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input[100];
	int number;

	printf("Enter an integer: ");
	fgets(input, sizeof(input), stdin);
	number = atoi(input);

	printf("The entered number is: %d\n", number);

	return (0);
}
