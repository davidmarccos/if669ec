#include <stdio.h>

#include <string.h>

#include <stdlib.h>



void uppercase(char *text) {

	char *p = text;

	while (*p) {

		*p = toupper(*p);

		p++;

	}

}





int main() {

	char text[] = "John Von Neumann\0";

	char text_[256];

	strcpy(text_, text);

	char *output = (char*) malloc(sizeof(text) + 1);

	char *result = NULL;

	char *last_name = NULL;

	char *p = NULL;





	result = strtok(text, " ");

	while (result != NULL) {

		last_name = result;

		result = strtok(NULL, " ");

	}



	p = strstr(text_, last_name);

	uppercase(last_name);

	strcpy(output, last_name);

	strcat(output, ", ");

	strncpy(output + strlen(output), text_, strlen(text_) - strlen(last_name) - 1);

	puts(text_);

	puts(output);

	free(output);

}