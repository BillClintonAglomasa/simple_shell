#include "shell.h"

/**
 * main - The entry point of program
 *
 * Return: Always return 0.
 */

int main(void)
{
	while (1)
	{
		_print_prompt();
		a = _get_input();
	}

	return (0);
}
