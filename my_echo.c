#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int newline = 1; // default: print newline
	int start = 1;	 // index

	if (argc > 1 && strcmp(argv[1], "-n") == 0)
	{
		if (argc == 2)
		{
			// Only -n provided -> treat as literal string
			newline = 1;
			start = 1;
		}
		else
		{
			// -n provided with other arguments -> suppress newline
			newline = 0;
			start = 2;
		}
	}

	// No arguments provided
	if (argc == 1)
	{
		printf("My echo is On.\n");
		return 0;
	}
	// Print arguments normally
	else
	{
		for (int i = start; i < argc; i++)
		{
			printf("%s", argv[i]);
			if (i + 1 < argc)
				printf(" ");
		}
	}

	if (newline)
		printf("\n");

	return 0;
}
