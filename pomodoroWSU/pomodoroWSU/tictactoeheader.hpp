#ifndef HEADER_HPP
#define HEADER_HPP

#define _CRT_SECURE_NO_WARNINGS


#include "projectHead.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <random>

void playGame();
int isWin(int TTT[3][3], int player);
void printBoard(int TTT[3][3]);
void takeTurn(int TTT[3][3], int player);
void aiTurn(int TTT[3][3], int player, int player2, int magic);

#endif