// PAL Week 1 - Examine a C Program - using scanf to retrieve user input
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/11/2025		initial

#define _CRT_SECURE_NO_WARNINGS // we will touch on this in the following week's session

#include <stdio.h> // what are we doing here? is this necessary?

int main(void)
{
	int cats;

	printf("How many cats do you have?\n");
	scanf("%d", &cats); // what does %d stand for?
	printf("So, you have %d cat(s)!\n", cats); // what does the f in printf stand for?
	return 0;
}