#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;											// index
	int newline_check = strcmp(argv[1], "-n") == 0; // 1 is No newline, 0 is with newline

	if (argc == 1)
	{
		printf("My echo is On.");
	}
	else
	{
		for (i = newline_check == 1 ? 2 : 1; i < argc; i++)
		{
			printf("%s", argv[i]);
			if (i < argc)
				printf(" ");
		}
	}
	if (newline_check == 0)
		printf("\n");

	return 0;
}
