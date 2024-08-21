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
int changedir(const char *path);

#endif
