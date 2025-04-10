#include "Node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

PNODE CreateNode(COMPONENT component)
{
	PNODE newNode = (PNODE)malloc(sizeof(NODE));
	if (!newNode) // why check?
	{
		fprintf(stderr, "Unable to allocate new node. Exiting...\n");
		return NULL;
	}

	newNode->component = component;
	newNode->nextNode = NULL;

	return newNode;
}

void SetNodeNextNode(PNODE currentNode, PNODE nextNode)
{
	currentNode->nextNode = nextNode;
}

PNODE GetNodeNextNode(PNODE currentNode)
{
	return currentNode->nextNode;
}

COMPONENT GetNodeComponent(PNODE currentNode)
{
	return currentNode->component;
}

void DisposeNode(PNODE currentNode)
{
	free(currentNode); // remember to free dynamically allocated memory
}