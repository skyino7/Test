#include <stdio.h>

int main() {

	char str[10];
	printf("Enter The Characters: ");
	fgets(str, 10, stdin);
	printf("You Entered: %s\n", str);
	return 0;

}
