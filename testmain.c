#include "main.h"

extern char **environ;

int main(void)
{
	char *line;
	char **args;
	char *cmd;
	int status;

	while (1)
	{
		printf("$ ");
		line = input();

		/* Tokenization de la ligne de commande */
		args = commands(line, " \t\r\n\a");

		if (args == NULL)
		{
			free(line);
			continue;
		}

		cmd = args[0];

		/* Gérer les commandes intégrées */
		if (strcmp(cmd, "cd") == 0)
		{
			if (args[1] == NULL)
			{
				fprintf(stderr, "expected argument to \"cd\"\n");
			}
			else
			{
				changedir(args[1]);
			}
		}
		else if (strcmp(cmd, "exit") == 0)
		{
			free_memory(line, args);
			exit(0);
		}
		else if (strcmp(cmd, "printenv") == 0)
		{
			printenv(environ);
		}
		else
		{
			/* Exécution des autres commandes */
			pid_t pid = fork();
			if (pid == 0)
			{
				/* Processus enfant */
				if (execvp(args[0], args) == -1)
				{
					perror("Error");
				}
				exit(EXIT_FAILURE);
			}
			else if (pid < 0)
			{
				perror("Error forking");
			}
			else
			{
				/* Processus parent */
				wait(&status);
			}
		}

		free_memory(line, args);
	}

	return (0);
}
