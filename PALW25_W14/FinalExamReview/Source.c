#include <stdio.h>
#include <stdlib.h>
#include "Duck.h"

#define COUNT_DUCKS 3

void DisplayArrayOfDucksRecursively(DUCK ducks[], int index, int lastIndex)
{
	if (index >= lastIndex) // base case
		return;
	else // recursive case
	{
		DisplayDuck(ducks[index]);
		DisplayArrayOfDucksRecursively(ducks, index + 1, lastIndex); // proceed to the next element
	}
}

int main(void)
{
	char quackBehaviours[][MAXSTR] = { "quack", "squeak", "mute" };
	char flyBehaviours[][MAXSTR] = { "fly with rocket", "fly with wings", "cant fly" };
	bool booleans[] = { true, true, false };

	PDUCK ducks = (PDUCK)calloc(COUNT_DUCKS, sizeof(DUCK));
	if (!ducks) // error checking
	{
		fprintf(stderr, "Unable to allocate ducks. Exiting...\n");
		exit(EXIT_FAILURE);
	}

	// Creates a few random ducks!s
	for (int i = 0; i < COUNT_DUCKS; i++)
	{
		SetFlyFlag(&(ducks[i]), booleans[i]);
		SetQuackFlag(&(ducks[i]), booleans[i]);
		SetSwimFlag(&(ducks[i]), true); // all ducks can swim

		SetQuackBehaviour(&(ducks[i]), quackBehaviours[i]);
		SetFlyBehaviour(&(ducks[i]), flyBehaviours[i]);
	}

	printf("\n ---------------- Ducks ---------------- \n");
	DisplayArrayOfDucksRecursively(ducks, 0, COUNT_DUCKS);

	free(ducks);
	return 0;
}