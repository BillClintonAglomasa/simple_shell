#include "shell.h"

/**
 * _strlength - Prints a string to stdout
 *
 * @str: Pointer to the sting to print
 *
 * Return: Returns no value
 */
int _strlength(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	return (a);
}
