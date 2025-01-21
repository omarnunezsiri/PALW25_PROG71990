// PAL Week 3 - Examine a C Program - Scanf vs scanf_s
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/11/2025		initial

#define _CRT_SECURE_NO_WARNINGS // what are we doing here? (it isn't as scary as it seems)

#include <stdio.h>

int main(void)
{
	int cats; 
	int dogs;

	printf("How many cats do you have?\n");
	scanf("%d", &cats); // bonus: what is this green squiggle line indicating?
	printf("Oh, so you have %d cat(s)!\n", cats);

	printf("Now...how many dogs do you have?\n");
	scanf_s("%d", &dogs);
	printf("So you have %d dog(s) and %d cat(s)! Awesome\n", dogs, cats);
	return 0;
}