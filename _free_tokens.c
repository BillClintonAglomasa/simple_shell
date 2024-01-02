#include "shell.h"

/**
 * _free_tokens - Frees the allocated memory for the tokens
 *
 * @tokens: An array containing tokens to be freed
 *
 * Return: Returns nothing.
 */


void _free_tokens(char **tokens)
{
	int i;

	i = 0;
	while (tokens[i] != NULL)
	{
		free(tokens[i]);
		i++;
	}

	free(tokens);
}
