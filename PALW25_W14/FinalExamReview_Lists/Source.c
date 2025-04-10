#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main(void)
{
	// Creates three components
	COMPONENT component1 = CreateComponent('a');
	COMPONENT component2 = CreateComponent('b');
	COMPONENT component3 = CreateComponent('c');

	LIST list = CreateList();
	DisplayList(list); // display an empty list!

	/* Error checking! What if malloc fails? */
	if (!AddComponentToList(&list, component1))
		exit(EXIT_FAILURE);

	if (!AddComponentToList(&list, component2))
		exit(EXIT_FAILURE);

	if (!AddComponentToList(&list, component3))
		exit(EXIT_FAILURE);

	DisplayList(list); // display the list with the 3 components
	DisposeList(&list); // make sure to free heap-allocated memory
	return 0;
}