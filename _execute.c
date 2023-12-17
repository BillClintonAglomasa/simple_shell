#include "shell.h"

/**
 * _execute - Executes an executable file
 *
 * @read_command: Pointer to the command read from stdin
 *
 * Return: Returns no value
 */

int _execute(char *read_command)
{
	int a;
	char *argv[] = {read_command, NULL};

	if (argv == NULL)
	{
		return (1);
	}

	a = execve(argv[0], argv, NULL);

	if (a == -1)
	{
		perror("Not found");
	}
}
