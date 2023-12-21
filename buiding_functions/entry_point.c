#include "main.h"

int main(void)
{
<<<<<<< HEAD
	char a[] = "This is is it";
	//char *b = malloc(sizeof(char) * (_strlength(a) + 1));
	int i = _strlength(a);
	int aa = 12;

	_print_an_int(aa);

	//if (b == NULL)
	//{
	//	perror("Error in allocating memory");
	//}
	//_strcpy(b, a);

	//printf("%s", b);

	//if (b == NULL)
	//{
	//	perror("Returned an empty string");
	//}
	//b = _capitalize_first_word(b);

	//i = 0;
	//while (b[i] != '\0')
	//{
	//	_print_a_char(b[i]);
	//	i++;
	//}
	//_print_a_char('\n');

	//free(b);
	return (0);
=======
	char *a = "This is is it";
	char *b = malloc(sizeof(char) * (_strlength(a) + 1));
	int i = 0;

	if (b == NULL)
	{
		perror("Error in allocating memory");
	}
	_strcpy(b, a);

	printf("%s", b);

	if (b == NULL)
	{
		perror("Returned an empty string");
	}
	b = _capitalize_first_word(b);

	i = 0;
	while (b[i] != '\0')
	{
		_print_a_char(b[i]);
		i++;
	}
	_print_a_char('\n');

	free(b);
>>>>>>> bb19b37532e2b9572729e0c5003a46a2f38512ad
}
