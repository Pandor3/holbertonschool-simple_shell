#include "main.h"

/**
 * path - function which will build the path
 * @envp: any environment variable
 * Return: NULL or envp[i] + 5 (the path)
 */

char *path(char **envp)
{
	int i = 0;

	while (envp[i] != NULL)
	{
		i++;
		if (strncmp(envp[i], "PATH=", 5) == 0)
			return (envp[i] + 5);
	}

	return (NULL);
}
