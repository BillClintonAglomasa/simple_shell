#include "shell.h"

/**
 * _print_prompt - Writes the character $ to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void _print_prompt(void)
{
	_print_a_char('$');
	_print_a_char('\n');
}
