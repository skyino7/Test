#include <stdio.h>

int main(void)
{
	char name[30];
	printf("Enter name: ");
	fgets(name, sizeof(name), stdin); //read string
	printf("Name: ");
	puts(name);

	return (0);
}
