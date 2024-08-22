#ifndef HEADER_FILE
#define HEADER_FILE
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *input(void);
char **commands(char *buffer, const char *str);
char *path(char **envp);
void printenv(char **env);
int changedir(const char *path);
void free_memory(char *buffer, char **args);
void exitshell(char *line, char **args);

#endif
