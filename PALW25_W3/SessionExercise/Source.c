// PAL Week 3 - Write a C Program
// 
// Prompt the user to enter a character
//		Calculate and display the ASCII value of the entered character
// Prompt the user to enter their name
//		Display a greeting message that includes their name
// Challenge: Can you create two versions of the same logic that apply to different
//			  compilers(WIN32 / others)?
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/23/2025		initial
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// Prompt the user to enter a character (%c)
	// - Scanf to scan the input
	char randomCharacter;
	printf("enter a random character: ");
	scanf("%c", &randomCharacter);

	// Display the ASCII value of the entered character
	printf("The character that you entered is %c\n", randomCharacter);
	printf("The ASCII value is %d", randomCharacter);
	return 0;
}