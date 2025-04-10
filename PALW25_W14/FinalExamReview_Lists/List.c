#include "List.h"
#include <stdio.h>
#include <stdlib.h>

LIST CreateList()
{
	LIST newList = { 0 };

	return newList;
}

bool AddComponentToList(PLIST pList, COMPONENT component)
{
	PNODE newnode = CreateNode(component);

	if (!newnode) // malloc failed
		return false;


	// What are the three places a node could be inserted?

	if (pList->head == NULL)
	{
		pList->head = newnode;
	}
	else
	{
		PNODE currentNode = pList->head;

		while (GetNodeNextNode(currentNode))
		{
			currentNode = GetNodeNextNode(currentNode);
		}

		SetNodeNextNode(currentNode, newnode);
	}
	return true;
}

void DisplayList(LIST list)
{
	if (list.head) // why is this good practice?
	{
		PNODE current = list.head;
		while (current)
		{
			DisplayComponent(GetNodeComponent(current));
			current = GetNodeNextNode(current);
		}
	}
	else
	{
		printf("List is empty!");
	}
}

void DisposeList(PLIST pList)
{
	// What is going on here?

	PNODE temp;
	PNODE current = pList->head;
	while (current)
	{
		temp = current;
		current = GetNodeNextNode(current);
		DisposeNode(temp);
	}
}