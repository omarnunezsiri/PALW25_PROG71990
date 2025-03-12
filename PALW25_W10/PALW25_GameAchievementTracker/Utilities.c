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