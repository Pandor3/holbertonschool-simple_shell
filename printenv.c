#include "main.h"

/**
 * printenv - function which will print environment variables
 * @env: chosen environment variable
 */

void printenv(char **env)
{
	int i = 0;
	int len = 0;

	while (env[i] != NULL)
	{
		i++;
		len = strlen(env[i]);

		if (write(1, env[i], len) == -1)
		{
			perror("Error");
			return;
		}
		write(1, "\n", 1);
	}
}
