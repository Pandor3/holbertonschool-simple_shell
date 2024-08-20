#include "main.h"

/**
 * commands - function which will take the input at tokenize them
 * @buffer: this will be used to be the buffer
 * @str: string
 * Return: Result
 */

char **commands(char *buffer, const char *str)
{
	char *token = NULL;
	char **results = NULL;
	int i, j, lentoken = 0;

	if (buffer == NULL || str == NULL)
		return (NULL);

	while (buffer[j] != buffer['\0'])
	{
		if (buffer[j] == *str)
		{
			lentoken++;
		}
		j++;
	}
	results = malloc((lentoken + 2) * sizeof(char *));
	if (results == NULL)
	{
		perror("Error regarding buffer allocation");
		return (NULL);
	}
	token = strtok(buffer, str);
	if (token == NULL)
	{
		free(results);
		return (NULL);
	}
	for (i = 0; token != NULL; i++)
	{
		results[i] = malloc(strlen(token) + 1);
		if (results[i] == NULL)
		{
			perror("Error regarding buffer allocation");
			return (NULL);
		}
	strcpy(results[i], token);
	token = strtok(NULL, str);
	}
	results[i] = NULL;
	return (results);
}
