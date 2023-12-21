#include "main.h"

/**
 * _print_an_int - writes the int c to stdout
 *
 * @c: The integer to print
 *
 * Return: On success 1.
 *
 * On error -1 is returned, and errno is set appropriately.
 */
int _print_an_int(int c)
{
	char c - '0';
	return (write(1, &c, 1));
}
