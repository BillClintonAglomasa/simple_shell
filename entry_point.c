#include "shell.h"

/**
 * main - The entry point of program
 *
 * Return: Always return 0.
 */

int main(void)
{
	int i, j;
	char *a = NULL;
	char **b = NULL;

	while (1)
	{
		_print_prompt();
		a = _get_input();
		b = _return_tokens(a);
		j = _execute(b);
		printf("%i", j);

		free(a);
		free(b);
	}

	return (0);
}
