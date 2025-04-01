#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "Duck.h"

void SetFlyFlag(PDUCK duck, bool fly)
{
	duck->fly = fly;
}

void SetSwimFlag(PDUCK duck, bool swim)
{
	duck->swim = swim;
}

void SetQuackFlag(PDUCK duck, bool quack)
{
	duck->quack = quack;
}

void SetQuackBehaviour(PDUCK duck, char* quack)
{
	strcpy(duck->quackBehaviour, quack);
}

void SetFlyBehaviour(PDUCK duck, char* fly)
{
	strcpy(duck->flyBehaviour, fly);
}

bool GetFlyFlag(DUCK duck)
{
	return duck.fly;
}

bool GetSwimFlag(DUCK duck)
{
	return duck.swim;
}

bool GetQuackFlag(DUCK duck)
{
	return duck.quack;
}

char* GetQuackBehaviour(DUCK duck)
{
	return duck.quackBehaviour;
}

char* GetFlyBehaviour(DUCK duck)
{
	return duck.flyBehaviour;
}

void DisplayDuck(DUCK duck)
{
	printf("\nDuck FLAGS (FLY/SWIM/QUACK): (%d/%d/%d)\n", duck.fly, duck.swim, duck.quack);
	printf("Quack behaviour: %s\n", duck.quackBehaviour);
	printf("Fly behaviour: %s\n\n", duck.flyBehaviour);
}