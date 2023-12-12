#include "shell.h"

void print_prompt(void)
{
	char *prompt = "$ ";
	write(STDOUT_FILENO, prompt, 2);
	write(STDOUT_FILENO, "\n", 3);
}
