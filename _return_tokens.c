#include "shell.h"

/**
 * _return_tokens - Breaks a sentence using a delimiter
 *
 * @read_line: A line to be tokenize or broken into words
 *
 * Return: A pointer to an array of tokens
 */

char **_return_tokens(char *read_line)
{
	char *token = NULL;
	char *delimiter = " \n";
	char **argv = NULL;
	int buffersize = 100;
	int i;

	argv = malloc(sizeof(char *) * buffersize);

	if (argv == NULL)
	{
		perror("Unable to allocate memory for argv");
		exit(EXIT_FAILURE);
	}

	token = strtok(read_line, delimiter);

	if (token == NULL)
	{
		perror("Unable to read sentence or done reading");
	}

	i = 0;

	while (token != NULL)
	{
		argv[i] = malloc(sizeof(char) * (_strlength(token) + 1));
		_strcpy(argv[i], token);
		i++;
		token = strtok(NULL, delimiter);
	}
	argv[i] = NULL;

	return (argv);
}
