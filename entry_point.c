#include "shell.h"

/**
 * main - The entry point of program
 *
 * Return: Always return 0.
 */

int main(void)
{
	int i, j;
	char *a = NULL, *b = NULL;

	while (1)
	{
		_print_prompt();
		a = _get_input();
		b = _return_tokens(a);

		i = 0;
		while (b[i] != NULL && b[i] != '\0')
		{
			j = 0;
			while (b[i][j] != '\0')
			{
				_print_a_char(b[i][j]);
				j++;
			}
			_print_a_char('\0');
			i++;
		}

		 _execute(a);

		free(a);
		free(b);
	}

	return (0);
}
