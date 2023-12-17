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
int _strlength(char *str);
char *read_line(void);

#endif
