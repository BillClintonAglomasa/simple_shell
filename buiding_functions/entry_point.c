#include "main.h"

int main(void)
{
	char *a, *b;
	int i;
	a = "This is is it";

	b = _capitalize_first_word(a);

	i = 0;
	while (b[i] != '\0')
	{
		_print_a_char(b);
	}
	_print_a_char('\n');
}
