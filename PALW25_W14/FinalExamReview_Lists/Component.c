#include "Component.h"
#include <stdio.h>

COMPONENT CreateComponent(char character)
{
	COMPONENT component = { .character = character };

	return component;
}

void DisplayComponent(COMPONENT component)
{
	printf("\n\n ______________ \n\n");
	printf("       %c\n", component.character);
	printf("\n ______________ \n\n");
}

void SetComponentCharacter(PCOMPONENT pComponent, char character)
{
	pComponent->character = character;
}

char GetComponentCharacter(COMPONENT component)
{
	return component.character;
}