#include "projectHead.hpp"

void menu(void)
{
	char str[11];
	int menuOption = 0;

	printf("Welcome to Explore WSU\n");
	printf("Please enter the date (MM/DD/YYYY): ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
		}
	}
	while(menuOption < 0 || menuOption > 6)
	{
		printf("would you like to: (1)view food options in Pullman\n\t(2)view study spots on campus\n\t(3) view the upcoming sports schedule\n\t(4) view activities on campus\n\t(5) find gym locations and hours\n\t(6) access the campus bus schedule\n");
		scanf("%d", &menuOption);

		if (menuOption < 0 || menuOption > 6)
		{
			printf("Invalid menu choice\n");
		}
	}

}