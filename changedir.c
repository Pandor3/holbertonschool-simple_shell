#include "main.h"

/**
 * changedir - function which will change directories
 * @path: the path to the chosen directory
 * Return: 1 or -1
 */

int changedir(const char *path)
{
	char *buffer = NULL;
	size_t size = 1024;

	if (path == NULL)
	{
		buffer = getcwd(buffer, size);
		if (buffer == NULL)
		{
			perror("Error");
			return (-1);
		}
		path = buffer;
	}
	if (chdir(path) == -1)
	{
		perror(path);
		free(buffer);
		return (-1);
	}
	free(buffer);
	return (1);
}
