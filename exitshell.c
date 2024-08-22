#include "main.h"

/**
 * exitshell - function which will exit simple shell
 * @line: command line
 * @args: arguments typed
 */

void exitshell(char *line, char **args)
{
	if (isatty(0))
	{
		free(line);
		free(args);
	}
	if (line != NULL)
	{
		free(line);
	}
	if (args != NULL)
	{
		free(args);
	}
		exit(0);
}
