#include "main.h"

/**
 * main - infinite loop at the core of the simple shell
 * @argc: arguments count
 * @argv: list of arguments
 * @envp: environnement variable
 *
 * Return: 0 on success, exit with 0 on fail
*/
int main(int argc, char **argv, char **envp)
{
	char *line;
	char **args;

	(void)argv;
	(void)argc;

	while (1)
	{
		line = input("$");
		if (line == NULL)
			break;

		if (strlen(line) == NULL)
		{
			free(line);
			continue;
		}
	}
	free(line);
	return (0);
}
