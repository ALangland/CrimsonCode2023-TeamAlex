#pragma once

#ifndef LAB_H
#define LAB_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <Windows.h>

typedef struct triviaQuestion
{
	char question[100];
	char ans[50];
}TriviaQuestion;

void trivia(void);

void timer(void);

#endif