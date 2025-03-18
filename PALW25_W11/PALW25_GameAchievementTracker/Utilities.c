#define _CRT_SECURE_NO_WARNINGS

#include "Utilities.h"

void RemoveTrailingNewLine(char* buf)
{
	size_t len = strlen(buf);
	for (int i = 0; i < len; i++)
	{
		if (buf[i] == '\n')
		{
			buf[i] = '\0';
		}
	}
}

bool GetReadFilePointer(char* filename, FILE** fpRead)
{
	bool opened = false;

	*fpRead = fopen(filename, "r");

	if (*fpRead != NULL)
	{
		opened = true;
	}

	return opened;
}

bool GetWriteFilePointer(char* filename, FILE** fpWrite)
{
	bool opened = false;

	*fpWrite = fopen(filename, "w");

	if (*fpWrite != NULL)
	{
		opened = true;
	}

	return opened;
}