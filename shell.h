#ifndef SHELL_H
#define SHELL_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _print_a_char(char c);
void _print_prompt(void);
char *_get_input(void);
char **_return_tokens(char *read_line);
int _execute(char *read_command);

#endif
