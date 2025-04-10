#pragma once
#include "Node.h"
#include <stdbool.h>

typedef struct List
{
	PNODE head;
}LIST, * PLIST;

LIST CreateList();
bool AddComponentToList(PLIST, COMPONENT);
void DisplayList(LIST);
void DisposeList(PLIST);