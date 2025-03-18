// PAL Week 11 - Examine a C Program - List ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial

#include "List.h"

LIST CreateList()
{
	LIST newList = { 0 }; // why is this considered a "safe" initial state?

	return newList;
}

bool AddItemToList(PLIST list, ITEM newItem)
{
	PNODE newNode = CreateNode(newItem);

	if (!newNode) // checks if the node was allocated (malloc can fail)
		return false;


	/*
	* Adding an item to a list has two cases:
	* 
	* 1 -
	*
	* 2 -
	*/

	if (list->head == NULL) // which case is this?
	{
		list->head = newNode;
	}
	else
	{
		PNODE currentNode = list->head;

		// which case is this?
		while (GetNextNode(currentNode))
		{
			currentNode = GetNextNode(currentNode);
		}

		SetNextNode(currentNode, newNode);
	}

	return true;
}

void DisplayList(LIST list)
{
	if (list.head) // common pattern to check if the list is empty
	{
		PNODE current = list.head;
		while (current)
		{
			DisplayItem(GetNodeItem(current));
			current = GetNextNode(current);
		}
	}
	else
	{
		printf("List is empty. Add items to it!\n");
	}
}

void DisposeList(PLIST list)
{
	PNODE temp;
	PNODE currentNode = list->head;

	while (currentNode)
	{
		/* 
		 * free what is behind me that way i don't let go of the chain...
		 * but why do we do this?
		*/

		temp = currentNode;
		currentNode = GetNextNode(currentNode);
		DisposeNode(temp);
	}
}