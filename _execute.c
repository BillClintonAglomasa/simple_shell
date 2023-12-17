#include "shell.h"

void _execute(char *read_command)
{
	char *argv[] = {read_command, NULL};

	execve(argv[0], argv, NULL);
}
