//File: integer-input.h
#include <math.h>
#ifdef INTEGER_INPUT_H
#define INTEGER_INPUT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX_DIGITS 12

/*
 * This function removes surplus characters from the input buffer.
 * otherwise, if more than the permitted number of characters have been entered
 * during the call to fgets(), the surplus characters (after MAX_DIGITS chars) remain in
 * the input buffer and will be wrongly accepted as input on the next iteration of the loop.
 */

static inline void ClearInputBuffer()
{
	char c = 0;
	//loop over input and consumer chars until buffer is empty
	while ((c = getchar()) != '\n' && c != EOF);
}

void getIntegerFromStdin(int *inputInteger)
{
	char *inputInteger = malloc(sizeof(char) * MAX_DIGITS);
	memset(inputBuffer, 0, MAX_DIGITS);

	char *input = NULL;
	while (input == NULL) {
		//Note that fgets returns inputBuffer on Success.
		//This becomes important when freeing - free either 'input' or
		//'inputBuffer' to avoid an attempted double-free error.
		
		input = fgets(inputBuffer, MAX_DIGITS, stdin);

		//If fgets() receives less than MAX_DIGITS, the last char in the array is '\n'
		//Therefore if the last char is not '\n', too many characters were entered.
		if (inputBuffer[strlen(inputBuffer) - 1] != '\n')
		{
			fprintf(stderr, "[ERROR]: Too many characters: max input is %d chars.\n", MAX_DIGITS);
			ClearInputBuffer();
			input = NULL;
			continue;
		}



}
