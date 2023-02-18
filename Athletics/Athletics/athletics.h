#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct athleticEvent {
	char sport[25];
	char date[50];
	char startTime[25];
	char endTime[25];
	int location;
}AthleticEvent;

void readFile(AthleticEvent* events);

void processString(char* line, AthleticEvent* event);