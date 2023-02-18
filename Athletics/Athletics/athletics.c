#include "athletics.h"

void readFile(AthleticEvent* events) {
	FILE* inputStream = fopen("Add2Calendar.csv", "r");
	char temp[100] = "\0";

	//Remove header
	fscanf(inputStream, "%s", temp);

	while (!feof(inputStream)) {
		strcpy(temp, "\0");
		fscanf(inputStream, "%s", temp);


	}



	fclose(inputStream);
}

void processString(char* line, AthleticEvent* event) {


}