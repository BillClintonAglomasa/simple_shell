#include "main.h"

/**
 * _print_str - Prints a string to stdout
 *
 * @str: Pointer to the string to be pointed
 *
 * Return: Nothing
 */
void print_str(char *s)
{
	int i = 0;
	int j, len;

	while(s[i] != '\0')
	{
		i++;
	}
	len = i;
	j = len - 1;

	while (j >= 0)
	{
		_print_a_char(s[j]);
		j--;
	}
	_print_a_char('\n');
}
