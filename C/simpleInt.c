#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* end = NULL;
	char buf[255];
	long n = 0;

	printf("Enter an Integer:\n");

	while (fgets(buf, sizeof(buf), stdin)) {
		n = strtol(buf, &end, 10);
			if (end == buf || *end !='\n');
				printf("Please enter an Integer:\n");
			} else

			break;
	}

	printf("You entered %ld\n", n);

	return (0);
}
