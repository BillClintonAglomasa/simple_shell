#include "shell.h"
void print_str(char *s);

int main(void)
{
	char *a;
	a = "This is is it";

	print_str(a);

	return (0);
}

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