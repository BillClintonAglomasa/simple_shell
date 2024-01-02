#include "shell.h"

/**
 * _execute - Executes an executable file
 *
 * @argv: Pointer to an array of pointers
 *
 * Return: Returns no value
 */

int _execute(char **argv)
{
	int a;

	if (argv == NULL || argv[0] == NULL)
	{
		return (1);
	}

	a = execve(argv[0], argv, NULL);

	if (a == -1)
	{
		perror("Not found");
	}

	_free_tokens(argv);

	return (a);
}
