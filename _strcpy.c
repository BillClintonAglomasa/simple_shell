#include "shell.h"

/**
 * _strcpy - Copies the content from one string to another
 *
 * @str2: Pointer to sting 2
 * @str1: Pointer to string 1
 *
 * Return: Returns pointer to str1
 */
char *_strcpy(char *str1, char *str2)
{
	int a = 0;

	while (str2[a] != '\0')
	{
		str1[a] = str2[a];
		a++;
	}
	str1[a] = '\0';

	return (str1);
}
