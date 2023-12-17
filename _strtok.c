#include "shell.h"

/**
 * _return_tokens - Breaks a sentence using a delimiter
 *
 * @read_line: A line to be tokenize or broken into words
 *
 * Return: A pointer to an array of tokens
 */

char *_return_tokens(char *read_line)
{
	char *token = NULL;
	char *delimiter = " \n";
	int i;

	*argv[] = NULL;

	token = strtok(read_line, delimiter);

	if (token == NULL)
	{
		perror("Unable to read sentence or done reading");
	}

	i = 0;

	while (token != NULL)
	{
		token = strktok(NULL, delimeter);
		argv[i] = token;
		i++;
	}
	argv[i] = NULL;

	return (argv);
}
