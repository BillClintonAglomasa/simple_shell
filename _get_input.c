#include "shell.h"

/**
 * _get_input - Reads a line from stdinput
 *
 * Return: The pointer to the line read.
 * On error -1 is returned, and errno is set appropriately.
 */

char *_get_input(void)
{
	char *read_command = NULL;
	size_t n = 0;
	ssize_t bytes_returned;
	char last_byte_returned;

	bytes_returned = getline(&read_command, &n, stdin);
	if (bytes_returned == -1)
	{
		free(read_command);
		perror("The was error reading from stdin");
		return (NULL);
	}
	else
	{
		last_byte_returned = read_command[bytes_returned - 1];
		if (last_byte_returned == '\n')
		{
			read_command[bytes_returned - 1] = '\0';
		}

		return (read_command);
	}
}
