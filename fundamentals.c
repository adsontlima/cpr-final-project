/* fundamentals module souce file version 1 */

#define _CRT_SECURE_NO_WARNINGS												
#define BUFFER_SIZE 80														// buffer size = 80 for buffer1
#define NUM_INPUT_SIZE 10													// buffer size = 10 for numInput

#include "fundamentals.h" 													// this will include the header file


void fundamentals(void) {
	/* Version 1 */

	printf("*** Start of Indexing Strings Demo ***\n");						// This function will be used here to display the start message: "START OF PROGRAM" on the screen.
	char buffer1[BUFFER_SIZE];												// In this case, two character arrays (strings) are provided, the former representing the string to be searched, and the latter indicating the specific character position to read.
	char numInput[NUM_INPUT_SIZE];											// The size of the buffer is set to 10, which is more than enough to store a single-digit number.
	size_t position;														// A variable to convert `numInput` into, which will be used to obtain the specific character.

	do {																	// The loop will continue as long as the initially input string is not equal to "q".
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);									// Get the string that needs to be searched through.
		buffer1[strlen(buffer1) - 1] = '\0';								// Add a null termination character at the end of the input string, overwriting anything that may be present there.

		if (strcmp(buffer1, "q") != 0) {									// Provided that the input string was not the letter 'q', which indicates QUIT, we proceed.
			printf("Type the character position whithin the string:\n");	// Ask the user to input the index of the desired character.
			fgets(numInput, NUM_INPUT_SIZE, stdin);							// Get the input for the index of the desired character.
			numInput[strlen(numInput) - 1] = '\0';							// Similarly to before (line 21), add a null termination character to the end of the input string, overwriting anything that may be present there.

			position = atoi(numInput);										// Convert the string input into an integer and store it in the 'position' variable. Please note that 'size_t' is just an unsigned int.

			if (position >= strlen(buffer1)) {								// If the chosen index falls outside the range of the string, print an error message and then print the final character in the string.
				position = strlen(buffer1) - 1;								// The chosen index will always be a non-negative value, including 0, so there is no need to check for values below 0.
				printf("Too big... Position reduced to max. availbale\n"); // This will display the error message: "Too big... Position reduced to max. available" on the screen.
			}
			printf("There character found at %d position is \'%c\'\n",		// Display the character located at the index 'position'.
				(int)position, buffer1[position]);							// The character at the index 'position' will be displayed on the screen.
		}
	} while (strcmp(buffer1, "q") != 0);									// The loop will continue as long as the initially input string is not equal to "q".
	printf("*** End of Indexing Strings Demo ***\n\n");						// Display the exit message: "END OF PROGRAM" on the screen.

	/* Version 2 */

	printf("*** Start of Measuring Strings Demo ***\n");					// This statement will show the start of measuring strings
	char buffer2[80];														// This will create a character type array "buffer2" which can hold upto 79 characters, and 1 extra space for the null character
	printf("Type a string (q - to quit):\n");
	gets(buffer2);															// This will get input from the user and store it in array "buffer2"
	while (strcmp(buffer2, "q") != 0) {										// A while loop which will be executed unless and until buffer2's value is equal to "q"; if q is entered, the program will end.
		printf("The length is %lu\n", strlen(buffer2));						// The length of input is printed on the screen using the function "strlen".
		printf("Type a string (q - to quit):\n");
		gets(buffer2);														// Gets the input from the user again and store it into the array "buffer1", because if the condition is true, it will prompt for the input again.
	}
	printf("*** End of Measuring Strings Demo ***\n\n");					// Statement printed if q is entered.
}
