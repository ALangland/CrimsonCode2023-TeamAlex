#include "tictactoeheader.hpp"

//print board
//get user input
//clear scr and then print board again
//ai move

int isWin(int TTT[3][3], int player) {
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

void printBoard(int TTT[3][3]) {
	char strTTT[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (TTT[i][j] == 0) {
				strTTT[i][j] = ' ';
			}
			else if (TTT[i][j] == 1) {
				strTTT[i][j] = 'X';
			}
			else {
				strTTT[i][j] = 'O';
			}
		}
	}
	putchar('\n');
	printf("A1   |A2   |A3   \n");
	printf("  %c  |  %c  |  %c  \n", strTTT[0][0], strTTT[0][1], strTTT[0][2]);
	printf("_____|_____|_____\n");
	printf("B1   |B2   |B3   \n");
	printf("  %c  |  %c  |  %c  \n", strTTT[1][0], strTTT[1][1], strTTT[1][2]);
	printf("_____|_____|_____\n");
	printf("C1   |C2   |C3   \n");
	printf("  %c  |  %c  |  %c  \n", strTTT[2][0], strTTT[2][1], strTTT[2][2]);
	printf("     |     |     \n");
}

void takeTurn(int TTT[3][3], int player) {
	if (isWin(TTT, 1) != 0 || isWin(TTT, 2) != 0) {
		return;
	}
	char coordinate[2];
	printBoard(TTT);
	printf("\nPlease enter a coordinate (ex. A2): ");
	do {
		scanf(" %c%c", &coordinate[0], &coordinate[1]);
	} while (TTT[(int)coordinate[0] - 97][(int)coordinate[1] - 49] != 0);
	TTT[(int)coordinate[0] - 97][(int)coordinate[1] - 49] = player;
	system("cls");
}

void aiTurn(int TTT[3][3], int player, int player2, int magic) {
	//first, check if there are any available wins
	//then, check if it can block any wins
	//then, check if it can make a 2 long with a 3rd open spot
	//then, place randomly

	if (isWin(TTT, player) != 0 || isWin(TTT, player2) != 0) {
		return;
	}

	printBoard(TTT);

	int played = 1;

	if(played == 1) {
		//horizontals
		if (TTT[0][0] == player && TTT[0][1] == player && TTT[0][2] == 0 && played == 1) {
			TTT[0][2] = player;
			played = 0;
		}
		if (TTT[1][0] == player && TTT[1][1] == player && TTT[1][2] == 0 && played == 1) {
			TTT[1][2] = player;
			played = 0;
		}
		if (TTT[2][0] == player && TTT[2][1] == player && TTT[2][2] == 0 && played == 1) {
			TTT[2][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player && TTT[0][1] == 0 && TTT[0][2] == player && played == 1) {
			TTT[0][1] = player;
			played = 0;
		}
		if (TTT[1][0] == player && TTT[1][1] == 0 && TTT[1][2] == player && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[2][0] == player && TTT[2][1] == 0 && TTT[2][2] == player && played == 1) {
			TTT[2][1] = player;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[0][1] == player && TTT[0][2] == player && played == 1) {
			TTT[0][0] = player;
			played = 0;
		}
		if (TTT[1][0] == 0 && TTT[1][1] == player && TTT[1][2] == player && played == 1) {
			TTT[1][0] = player;
			played = 0;
		}
		if (TTT[2][0] == 0 && TTT[2][1] == player && TTT[2][2] == player && played == 1) {
			TTT[2][0] = player;
			played = 0;
		}
		//verticals
		if (TTT[0][0] == 0 && TTT[1][0] == player && TTT[2][0] == player && played == 1) {
			TTT[0][0] = player;
			played = 0;
		}
		if (TTT[0][1] == 0 && TTT[1][1] == player && TTT[2][1] == player && played == 1) {
			TTT[0][1] = player;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][2] == player && TTT[2][2] == player && played == 1) {
			TTT[0][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player && TTT[1][0] == 0 && TTT[2][0] == player && played == 1) {
			TTT[1][0] = player;
			played = 0;
		}
		if (TTT[0][1] == player && TTT[1][1] == 0 && TTT[2][1] == player && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[0][2] == player && TTT[1][2] == 0 && TTT[2][2] == player && played == 1) {
			TTT[1][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player && TTT[1][0] == player && TTT[2][0] == 0 && played == 1) {
			TTT[2][0] = player;
			played = 0;
		}
		if (TTT[0][1] == player && TTT[1][1] == player && TTT[2][1] == 0 && played == 1) {
			TTT[2][1] = player;
			played = 0;
		}
		if (TTT[0][2] == player && TTT[1][2] == player && TTT[2][2] == 0 && played == 1) {
			TTT[2][2] = player;
			played = 0;
		}
		//diagonals
		if (TTT[0][0] == player && TTT[1][1] == player && TTT[2][2] == 0 && played == 1) {
			TTT[2][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player && TTT[1][1] == 0 && TTT[2][2] == played && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[1][1] == player && TTT[2][2] == player && played == 1) {
			TTT[0][0] = player;
			played = 0;
		}
		if (TTT[0][2] == player && TTT[1][1] == player && TTT[2][0] == 0 && played == 1) {
			TTT[2][0] = player;
			played = 0;
		}
		if (TTT[0][2] == player && TTT[1][1] == 0 && TTT[2][0] == player && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][1] == player && TTT[2][0] == player && played == 1) {
			TTT[0][2] = player;
			played = 0;
		}
	}
	//check for blocks
	if (played == 1) {
		//horizontals
		if (TTT[0][0] == player2 && TTT[0][1] == player2 && TTT[0][2] == 0 && played == 1) {
			TTT[0][2] = player;
			played = 0;
		}
		if (TTT[1][0] == player2 && TTT[1][1] == player2 && TTT[1][2] == 0 && played == 1) {
			TTT[1][2] = player;
			played = 0;
		}
		if (TTT[2][0] == player2 && TTT[2][1] == player2 && TTT[2][2] == 0 && played == 1) {
			TTT[2][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player2 && TTT[0][1] == 0 && TTT[0][2] == player2 && played == 1) {
			TTT[0][1] = player;
			played = 0;
		}
		if (TTT[1][0] == player2 && TTT[1][1] == 0 && TTT[1][2] == player2 && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[2][0] == player2 && TTT[2][1] == 0 && TTT[2][2] == player2 && played == 1) {
			TTT[2][1] = player;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[0][1] == player2 && TTT[0][2] == player2 && played == 1) {
			TTT[0][0] = player;
			played = 0;
		}
		if (TTT[1][0] == 0 && TTT[1][1] == player2 && TTT[1][2] == player2 && played == 1) {
			TTT[1][0] = player;
			played = 0;
		}
		if (TTT[2][0] == 0 && TTT[2][1] == player2 && TTT[2][2] == player2 && played == 1) {
			TTT[2][0] = player;
			played = 0;
		}
		//verticals
		if (TTT[0][0] == 0 && TTT[1][0] == player2 && TTT[2][0] == player2 && played == 1) {
			TTT[0][0] = player;
			played = 0;
		}
		if (TTT[0][1] == 0 && TTT[1][1] == player2 && TTT[2][1] == player2 && played == 1) {
			TTT[0][1] = player;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][2] == player2 && TTT[2][2] == player2 && played == 1) {
			TTT[0][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player2 && TTT[1][0] == 0 && TTT[2][0] == player2 && played == 1) {
			TTT[1][0] = player;
			played = 0;
		}
		if (TTT[0][1] == player2 && TTT[1][1] == 0 && TTT[2][1] == player2 && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[0][2] == player2 && TTT[1][2] == 0 && TTT[2][2] == player2 && played == 1) {
			TTT[1][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player2 && TTT[1][0] == player2 && TTT[2][0] == 0 && played == 1) {
			TTT[2][0] = player;
			played = 0;
		}
		if (TTT[0][1] == player2 && TTT[1][1] == player2 && TTT[2][1] == 0 && played == 1) {
			TTT[2][1] = player;
			played = 0;
		}
		if (TTT[0][2] == player2 && TTT[1][2] == player2 && TTT[2][2] == 0 && played == 1) {
			TTT[2][2] = player;
			played = 0;
		}
		//diagonals
		if (TTT[0][0] == player2 && TTT[1][1] == player2 && TTT[2][2] == 0 && played == 1) {
			TTT[2][2] = player;
			played = 0;
		}
		if (TTT[0][0] == player2 && TTT[1][1] == 0 && TTT[2][2] == player2 && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[0][0] == 0 && TTT[1][1] == player2 && TTT[2][2] == player2 && played == 1) {
			TTT[0][0] = player;
			played = 0;
		}
		if (TTT[0][2] == player2 && TTT[1][1] == player2 && TTT[2][0] == 0 && played == 1) {
			TTT[2][0] = player;
			played = 0;
		}
		if (TTT[0][2] == player2 && TTT[1][1] == 0 && TTT[2][0] == player2 && played == 1) {
			TTT[1][1] = player;
			played = 0;
		}
		if (TTT[0][2] == 0 && TTT[1][1] == player2 && TTT[2][0] == player2 && played == 1) {
			TTT[0][2] = player;
			played = 0;
		}
	}
	
	if (played == 1) {
		int success = 0;
		do {
			int rand1 = rand() % 3;
			int rand2 = rand() % 3;
			if (TTT[rand1][rand2] == 0) {
				TTT[rand1][rand2] = player;
				success = 1;
			}
		} while (success == 0);
	}
	system("cls");
	if(player2 == 1 && magic == 1) {
		printf("\nYou are player 2 (O).\n");
	}
	printBoard(TTT);
	printf("The AI has made its move.\n");
	system("pause");
	system("cls");
}

void playGame() {
	srand((unsigned int)time(NULL));
	int TTT[3][3];
	int p1 = rand() % 2 + 1; //human
	int p2; //ai
	if (p1 == 1) {
		p2 = 2;
	}
	else {
		p2 = 1;
	}
	//initializing the array with zeroes
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			TTT[i][j] = 0;
		}
	}
	if (p1 == 1) {
		printf("\nYou are player 1 (X).\n");
	}
	int magic = 1;
	//game loop: print board, get user input, clrscr and then print board again, ai move, etc
	while (isWin(TTT, p1) == 0 && isWin(TTT, p2) == 0) {
		if (p1 == 1) {
			takeTurn(TTT, p1);
			magic = 0;
			aiTurn(TTT, p2, p1, magic);
		}
		else {
			aiTurn(TTT, p1, p2, magic);
			takeTurn(TTT, p2);
			magic = 0;
		}
	}
	int winner = 0;
	if (isWin(TTT, p1) == 1) {
		winner = 1; 
	}
	else if(isWin(TTT, p2) == 2) {
		winner = 2;
	}
	if (winner == 1 || winner == 2) {
		printf("\n**************************\n");
		printf("* PLAYER %d IS THE WINNER *\n", winner);
		printf("**************************\n");
	}
	else {
		printf("\nit's a tie.\n");
	}
}