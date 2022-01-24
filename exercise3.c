#include <stdio.h>
#include <string.h>

int main()
{
	char input[51];

	while (strcmp(input, "quit")!=0)
	{
		printf("Enter any single word command with up to 50 characters: ");
		scanf("%50s", &input);
		if (strcmp(input, "quit")!=0) printf("%d\n", strlen(input));
	}
}
