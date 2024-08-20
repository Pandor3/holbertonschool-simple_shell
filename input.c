#include "main.h"

/**
 * input - this function will be used in order to read what the user will write
 * Return: 0
 */

char *input(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	read = getline(&line, &len, stdin);

	if (read == -1)
	{
		free(line);
		perror("Erreur");
		exit(EXIT_FAILURE);
	}
	return (line);
}
