// PAL Week 9 - Examine a C Program - using all 3 common standard streams
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-05		initial
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 50

int main(void)
{
	char input[MAXLINE];
	fprintf(stdout, "Enter a string: "); // can we simplify this line? 
	//printf("Enter a string: ");

	//scanf("%s", input);
	fgets(input, MAXLINE, stdin); // scanf or fgets? fgets spaces, scanf no spaces

	//fputs("Writing to stream...(stdout)\n", stdout); // can we simplify this line?
	printf("Writing to steam...(stdout)\n");
	int fputsReturn = fputs(input, stdout);

	if (fputsReturn == EOF) // what are we checking here?
	{
		fputs("ERROR. Exiting...\n", stderr);
	}

	return 0;
}