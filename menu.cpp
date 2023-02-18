#include "projectHead.cpp"

void menu(void)
{
	char str[11];

	printf("Welcome to Explore WSU\n");
	printf("Please enter the date (MM/DD/YYYY): ");

	printf("Enter the name of the song you would like to delete: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
		}
	}
	printf("would you like to: (1)view food options in Pullman\n\t(2)view study spots on campus\n\t(3) view the upcoming sports schedule\n\t(4) view activities on campus\n\t(5) find gym locations and hours\n\t(6) access the campus bus schedule\n")
}