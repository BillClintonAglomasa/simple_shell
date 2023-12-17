#include "shell.h"

/**
 * main - The entry point of program
 *
 * Return: Always return 0.
 */

int main(void)
{
	int i;
	char *a;

	while (1)
	{
		_print_prompt();
		a = _get_input();

		_execute(a);

		free(a);
	}

	return (0);
}
