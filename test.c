#include <stdio.h>

int main(void)
{
	/*Variable to store input*/
	char answer[50];

	/*Display prompt*/
	printf("What's your name? ");

	/*Receive User input*/
	scanf("%s", answer);

	/*Print the input*/
	printf("Hello, %s\n", answer);
}
