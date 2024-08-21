#include "main.h"

/**
 * free_memory - function which will free the memory
 * @buffer: buffer used to store command line
 * @args: arguments typed by the user
 */

void free_memory(char *buffer, char **args)
{
	free(buffer);
	if (args != NULL)
		free(args);
}
