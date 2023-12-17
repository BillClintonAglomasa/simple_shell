#include "shell.h"

void execute_function(char *read_command)
{
	char *terminator = NULL;
	char **argv = {read_command, terminator};

	execve(argv[0], argv, NULL);
}
