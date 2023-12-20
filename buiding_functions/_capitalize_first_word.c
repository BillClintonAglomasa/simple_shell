#include "main.h"

/**
 * _capitalize_first_word - Capitalize first char of each word
 *
 * @str: Pointer to the string to capitalize its first char of each word
 *
 * Return: Returns a pointer to changed sentence
 */
char *_capitalize_first_word(char *str)
{
	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
			'{', '}'};
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] => 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == spe[j]);if ()
						      str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}

	return (str);
}
