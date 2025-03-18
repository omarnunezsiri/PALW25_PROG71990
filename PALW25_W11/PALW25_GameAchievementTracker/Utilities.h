#pragma once

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void RemoveTrailingNewLine(char*);

bool GetReadFilePointer(char*, FILE**);

bool GetWriteFilePointer(char*, FILE**);