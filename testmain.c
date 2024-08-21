#include "main.h"

/**
 * main - entry point to the shell code
 * Return: 0
 */

int main(void)
{
	char *line;

	while (1)
	{
	line = input();
	printf("%s", line);
	free(line);
	}
	return (0);
}
