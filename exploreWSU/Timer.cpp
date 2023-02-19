#include "Timer.hpp"

void trivia(void)
{
	FILE* infile = fopen("infile.csv", "r");
	int n = 0, m = 0, breakMinutes = 0, seconds = 0;
	char line[150], reply[50], trashReply[50], trash[5], c = '\0';
	TriviaQuestion arr[50] = { "", "" };


	while (!feof(infile))
	{
		fgets(line, 149, infile);
		strcpy(arr[n].question, strtok(line, "\""));
		strcpy(trash, strtok(NULL, "\""));
		strcpy(arr[n].ans, strtok(NULL, "\""));
		n++;
	}

	m = rand() % n;

	puts(arr[m].question);

	fgets(trashReply, sizeof(reply), stdin);
	fgets(reply, sizeof(reply), stdin);

	for (int i = 0; i < strlen(reply); i++)
	{
		if (reply[i] == '\n')
		{
			reply[i] = '\0';
		}
	}

	if (strcmp(reply, arr[m].ans) == 0)// || strcmp(reply, strlwr(arr[m].ans)) == 0)
	{
		printf("You answered correctly! Enjoy an extra minute of break!\n");
		breakMinutes = 0;
		seconds = 10;
		while (breakMinutes >= 0 || seconds != 0)
		{
			if (breakMinutes < 0)
			{
				break;
			}

			if (seconds < 10)
			{
				printf("Break Time Left: %d:0%d", breakMinutes, seconds);
			}
			else
			{
				printf("Break Time Left: %d:%d", breakMinutes, seconds);

			}
			Sleep(1000);
			system("cls");
			seconds--;

			if (seconds == 0)
			{
				breakMinutes--;
				seconds = 59;
			}
		}
	}
	else
	{
		printf("Incorrect! Back to work:(\n");
	}
}

void timer(void)
{
	int totalRounds = 0, copyRounds = 1, minutes = 0, seconds = 0, breakMinutes = 0;

	printf("Welcome to the Coug StudyBot\n\nThe Coug StudyBot helps create a more focused study environment for students by utilizing the Pomodoro technique.");
	printf("How many rounds of the Pomadoro would you like to complete: ");
	scanf("%d", &totalRounds);

	while (copyRounds <= totalRounds)
	{
		minutes = 0;
		seconds = 10;
		while (seconds != 0 || minutes >= 0)
		{
			if (minutes < 0)
			{
				break;
			}
			system("cls");
			if (seconds < 10)
			{
				printf("Round %d\nTime Left: %d:0%d", copyRounds, minutes, seconds);

			}
			else
			{
				printf("Round %d\nTime Left: %d:%d", copyRounds, minutes, seconds);
			}
			Sleep(1000);
			system("cls");
			seconds--;

			if (seconds == 0)
			{
				minutes--;
				seconds = 59;
			}
		}


		if (minutes <= 0)
		{
			printf("Break time! Make sure to stretch and drink some water!\n");
			Sleep(2000);
			system("cls");
			if (copyRounds % 4 == 0)
			{
				breakMinutes = 10;
			}
			else
			{
				breakMinutes = 0;
			}
			seconds = 10;
			while (breakMinutes >= 0 || seconds != 0)
			{
				if (breakMinutes < 0)
				{
					break;
				}
				if (seconds < 10)
				{
					printf("Break Time Left: %d:0%d", breakMinutes, seconds);
				}
				else
				{
					printf("Break Time Left: %d:%d", breakMinutes, seconds);

				}
				Sleep(1000);
				system("cls");
				seconds--;

				if (seconds == 0)
				{
					breakMinutes--;
					seconds = 59;
				}
			}

		}
		trivia();
		Sleep(1000);

		copyRounds++;
	}
}
