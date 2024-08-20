#include "main.h"

/*
 * main - infinity loop at the core of the simple shell
 * Return: 0 on success, exit with 0 on fail
*/
int main(int argc, char **argv, char **envp)
{
	char *line = NULL;

	while (1)
	{
		printf("$ ");  /* Afficher le prompt */

		nread = getline(&line, &len, stdin);
		if (nread == -1)
		{
			perror("getline");
			free(line);
			exit(1);
		}
	}
	free(line);
	return (0);
}
