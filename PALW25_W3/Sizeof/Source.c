// PAL Week 3 - Examine a C Program - Sizeof
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/11/2025		initial

#include <stdio.h>

// Main function
int main(void)
{
	/*
	*  What makes a variable, a variable? This also applies to constants except for 3.1
	*  1. Assign a type
	*  2. What is a, b, c and d? 
	*	  - Containers
	*     - Characters
	*     - A symbol for what it contains
	*         - The name (final answer)
	*  3. Stores a value
	*    3.1. Able to modify it
	*/

	int a = 70;
	float b = 15.0f;
	char c = 'a';
	double d = 20.0;

	// Sizeof: How many bytes <thing, variable> can hold 
	printf("size in bytes for an integer: %d\n", sizeof(a));	// 4 bytes
	printf("size in bytes for a float: %d\n", sizeof(b));		// 4 bytes
	printf("size in bytes for a character: %d\n", sizeof(c));	// 1 byte (ASCII)
	printf("size in bytes for a double: %d\n", sizeof(d));      // 8 bytes
	return 0;
}