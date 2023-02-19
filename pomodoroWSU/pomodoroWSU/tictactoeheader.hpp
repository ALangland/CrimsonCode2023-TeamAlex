#ifndef HEADER_HPP
#define HEADER_HPP

#define _CRT_SECURE_NO_WARNINGS


#include "projectHead.hpp"

void getArray(int grid[3][3], int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);

void playGame();
int isWin(int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3, int player);
int aiTurn(int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);

#endif