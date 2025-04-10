#pragma once


typedef struct Component
{
	char character;
}COMPONENT, * PCOMPONENT;

COMPONENT CreateComponent(char);
void DisplayComponent(COMPONENT);

void SetComponentCharacter(PCOMPONENT, char);
char GetComponentCharacter(COMPONENT);