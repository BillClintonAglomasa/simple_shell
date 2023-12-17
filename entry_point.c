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

		for (i = 0; a[i] != '\0'; i++)
		{
			_print_a_char(a[i]);
		}
		_print_a_char('\n');

		free(a);
	}

	return (0);
}
