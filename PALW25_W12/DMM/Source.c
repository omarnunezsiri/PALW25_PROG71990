// PAL Week 12 - Examine a C Program - Dynamic Memory Management (DMM)
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-27		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
*
* DMM (Dynamic Memory Management)
* 
* - malloc (memory allocation)
* - calloc (memory allocation but initializes to 0)
* - realloc (reallocate/resize memory)
* - free
*
*/

int main(void)
{
	int* array = (int*)malloc(1000000000 * sizeof(int));
	free(array);

	int* pInt = (int*)calloc(1, sizeof(int)); // dynamically allocating an integer
	if (!pInt) // error checking, remember from linked lists?
	{
		fprintf(stderr, "Error allocating pInt. Exiting...\n");
		exit(EXIT_FAILURE);
	}

	printf("\n pInt:%d \n", *pInt); // what will this display? how can we fix it?

	int* pAnotherInt = (int*)calloc(5, sizeof(int));
	if (!pAnotherInt)
	{
		fprintf(stderr, "Error allocating pAnotherInt. Exiting...\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("AnotherInt[%d] = %d\n", i, pAnotherInt[i]);
	}

	char* string = (char*)malloc(sizeof(char) * 6);
	if (!string)
	{
		fprintf(stderr, "Error allocating string. Exiting...\n");
		exit(EXIT_FAILURE);
	}

	strcpy(string, "Omar\0");
	printf("\n initial string: %s \n", string);

	char* pString = string; // hold a copy just in case realloc fails!
	string = (char*)realloc(string, sizeof(char) * 20);
	if (!string)
	{
		free(pString); // free original!

		fprintf(stderr, "Error reallocating string. Exiting...\n");
		exit(EXIT_FAILURE);
	}

	strcat(string, " Nunez Siri"); // string concatenation ("First String" + " Second String" = "First String Second String")
	printf("\n realloced string: %s \n", string); // What will this display?

	printf("string: %p and pString: %p \n", string, pString);
	printf("string: %s and pString %s \n", string, pString);

	free(pInt);
	free(pAnotherInt);
	free(string);

	return 0;
}