#include "shell.h"

void execute_function(char *read_command)
{
	char **argv = {read_command, NULL};

	execve(argv[0], argv, NULL);
	
}
