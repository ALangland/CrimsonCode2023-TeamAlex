#include "tictactoeheader.hpp"

//print board
//get user input
//clear scr and then print board again
//ai move

void getArray(int grid[3][3], int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3) {
	grid[0][0] = A1;
	grid[0][1] = A2;
	grid[0][2] = A3;
	grid[1][0] = B1;
	grid[1][1] = B2;
	grid[1][2] = B3;
	grid[2][0] = C1;
	grid[2][1] = C2;
	grid[2][2] = C3;
}

int isWin(int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3, int player) {
	int TTT[3][3];
	getArray(TTT, A1, A2, A3, B1, B2, B3, C1, C2, C3);
	int success = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				if (TTT[i][j] == TTT[i + 1][j] && TTT[i + 1][j] == TTT[i + 2][j]) {
					if (TTT[i][j] == player) {
						success = player;
					}
				}
			}
			if (j == 0) {
				if (TTT[i][j] == TTT[i][j+1] && TTT[i][j+1] == TTT[i][j+2]) {
					if (TTT[i][j] == player) {
						success = player;
					}
				}
			}
			if (TTT[0][0] == TTT[1][1] && TTT[1][1] == TTT[2][2]) {
				if (TTT[1][1] == player) {
					success = player;
				}
			}
			if (TTT[0][2] == TTT[1][1] && TTT[1][1] == TTT[2][0]) {
				if (TTT[1][1] == player) {
					success = player;
				}
			}
		}
	}
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (TTT[i][j] != 0) {
				count++;
			}
		}
	}
	if (count == 9) {
		return 3;
	}
	return success;
}

int aiTurn(int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3) {
	//first, check if there are any available wins
	//then, check if it can block any wins
	//then, check if it can make a 2 long with a 3rd open spot
	//then, place randomly
	int TTT[3][3];
	getArray(TTT, A1, A2, A3, B1, B2, B3, C1, C2, C3);

	if (isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 2) != 0 || isWin(A1, A2, A3, B1, B2, B3, C1, C2, C3, 1) != 0) {
		return 0;
	}

	int aiSquare = 0;
	int played = 1;

	if(played == 1) {
		//horizontals
		if (TTT[0][0] == 2 && TTT[0][1] == 2 && TTT[0][2] == 0 && played == 1) {
			aiSquare = 3;
			played = 0;
		}
		if (TTT[1][0] == 2 && TTT[1][1] == 2 && TTT[1][2] == 0 && played == 1) {
			aiSquare = 6;
			played = 0;
		}
		if (TTT[2][0] == 2 && TTT[2][1] == 2 && TTT[2][2] == 0 && played == 1) {
			aiSquare = 9;
			played = 0;
		}
		if (TTT[0][0] == 2 && TTT[0][1] == 0 && TTT[0][2] == 2 && played == 1) {
			aiSquare = 2;
			played = 0;
		}
		if (TTT[1][0] == 2 && TTT[1][1] == 0 && TTT[1][2] == 2 && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[2][0] == 2 && TTT[2][1] == 0 && TTT[2][2] == 2 && played == 1) {
			aiSquare = 8;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[0][1] == 2 && TTT[0][2] == 2 && played == 1) {
			aiSquare = 1;
			played = 0;
		}
		if (TTT[1][0] == 0 && TTT[1][1] == 2 && TTT[1][2] == 2 && played == 1) {
			aiSquare = 4;
			played = 0;
		}
		if (TTT[2][0] == 0 && TTT[2][1] == 2 && TTT[2][2] == 2 && played == 1) {
			aiSquare = 7;
			played = 0;
		}
		//verticals
		if (TTT[0][0] == 0 && TTT[1][0] == 2 && TTT[2][0] == 2 && played == 1) {
			aiSquare = 1;
			played = 0;
		}
		if (TTT[0][1] == 0 && TTT[1][1] == 2 && TTT[2][1] == 2 && played == 1) {
			aiSquare = 2;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][2] == 2 && TTT[2][2] == 2 && played == 1) {
			aiSquare = 3;
			played = 0;
		}
		if (TTT[0][0] == 2 && TTT[1][0] == 0 && TTT[2][0] == 2 && played == 1) {
			aiSquare = 4;
			played = 0;
		}
		if (TTT[0][1] == 2 && TTT[1][1] == 0 && TTT[2][1] == 2 && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[0][2] == 2 && TTT[1][2] == 0 && TTT[2][2] == 2 && played == 1) {
			aiSquare = 6;
			played = 0;
		}
		if (TTT[0][0] == 2 && TTT[1][0] == 2 && TTT[2][0] == 0 && played == 1) {
			aiSquare = 7;
			played = 0;
		}
		if (TTT[0][1] == 2 && TTT[1][1] == 2 && TTT[2][1] == 0 && played == 1) {
			aiSquare = 8;
			played = 0;
		}
		if (TTT[0][2] == 2 && TTT[1][2] == 2 && TTT[2][2] == 0 && played == 1) {
			aiSquare = 9;
			played = 0;
		}
		//diagonals
		if (TTT[0][0] == 2 && TTT[1][1] == 2 && TTT[2][2] == 0 && played == 1) {
			aiSquare = 9;
			played = 0;
		}
		if (TTT[0][0] == 2 && TTT[1][1] == 0 && TTT[2][2] == played && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[1][1] == 2 && TTT[2][2] == 2 && played == 1) {
			aiSquare = 1;
			played = 0;
		}
		if (TTT[0][2] == 2 && TTT[1][1] == 2 && TTT[2][0] == 0 && played == 1) {
			aiSquare = 7;
			played = 0;
		}
		if (TTT[0][2] == 2 && TTT[1][1] == 0 && TTT[2][0] == 2 && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][1] == 2 && TTT[2][0] == 2 && played == 1) {
			aiSquare = 3;
			played = 0;
		}
	}
	//check for blocks
	if (played == 1) {
		//horizontals
		if (TTT[0][0] == 1 && TTT[0][1] == 1 && TTT[0][2] == 0 && played == 1) {
			aiSquare = 3;
			played = 0;
		}
		if (TTT[1][0] == 1 && TTT[1][1] == 1 && TTT[1][2] == 0 && played == 1) {
			aiSquare = 6;
			played = 0;
		}
		if (TTT[2][0] == 1 && TTT[2][1] == 1 && TTT[2][2] == 0 && played == 1) {
			aiSquare = 9;
			played = 0;
		}
		if (TTT[0][0] == 1 && TTT[0][1] == 0 && TTT[0][2] == 1 && played == 1) {
			aiSquare = 2;
			played = 0;
		}
		if (TTT[1][0] == 1 && TTT[1][1] == 0 && TTT[1][2] == 1 && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[2][0] == 1 && TTT[2][1] == 0 && TTT[2][2] == 1 && played == 1) {
			aiSquare = 8;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[0][1] == 1 && TTT[0][2] == 1 && played == 1) {
			aiSquare = 1;
			played = 0;
		}
		if (TTT[1][0] == 0 && TTT[1][1] == 1 && TTT[1][2] == 1 && played == 1) {
			aiSquare = 4;
			played = 0;
		}
		if (TTT[2][0] == 0 && TTT[2][1] == 1 && TTT[2][2] == 1 && played == 1) {
			aiSquare = 7;
			played = 0;
		}
		//verticals
		if (TTT[0][0] == 0 && TTT[1][0] == 1 && TTT[2][0] == 1 && played == 1) {
			aiSquare = 1;
			played = 0;
		}
		if (TTT[0][1] == 0 && TTT[1][1] == 1 && TTT[2][1] == 1 && played == 1) {
			aiSquare = 2;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][2] == 1 && TTT[2][2] == 1 && played == 1) {
			aiSquare = 3;
			played = 0;
		}
		if (TTT[0][0] == 1 && TTT[1][0] == 0 && TTT[2][0] == 1 && played == 1) {
			aiSquare = 4;
			played = 0;
		}
		if (TTT[0][1] == 1 && TTT[1][1] == 0 && TTT[2][1] == 1 && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[0][2] == 1 && TTT[1][2] == 0 && TTT[2][2] == 1 && played == 1) {
			aiSquare = 6;
			played = 0;
		}
		if (TTT[0][0] == 1 && TTT[1][0] == 1 && TTT[2][0] == 0 && played == 1) {
			aiSquare = 7;
			played = 0;
		}
		if (TTT[0][1] == 1 && TTT[1][1] == 1 && TTT[2][1] == 0 && played == 1) {
			aiSquare = 8;
			played = 0;
		}
		if (TTT[0][2] == 1 && TTT[1][2] == 1 && TTT[2][2] == 0 && played == 1) {
			aiSquare = 9;
			played = 0;
		}
		//diagonals
		if (TTT[0][0] == 1 && TTT[1][1] == 1 && TTT[2][2] == 0 && played == 1) {
			aiSquare = 9;
			played = 0;
		}
		if (TTT[0][0] == 1 && TTT[1][1] == 0 && TTT[2][2] == 1 && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[1][1] == 1 && TTT[2][2] == 1 && played == 1) {
			aiSquare = 1;
			played = 0;
		}
		if (TTT[0][2] == 1 && TTT[1][1] == 1 && TTT[2][0] == 0 && played == 1) {
			aiSquare = 3;
			played = 0;
		}
		if (TTT[0][2] == 1 && TTT[1][1] == 0 && TTT[2][0] == 1 && played == 1) {
			aiSquare = 5;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][1] == 1 && TTT[2][0] == 1 && played == 1) {
			aiSquare = 7;
			played = 0;
		}
	}
	
	if (played == 1) {
		int success = 0;
		do {
			int rand1 = 0;
			int rand2 = 1;
			if (TTT[rand1][rand2] == 0) {
				aiSquare = (3 * rand1) + rand2 + 1;
			}
		} while (success == 0);
	}
	return aiSquare;
}