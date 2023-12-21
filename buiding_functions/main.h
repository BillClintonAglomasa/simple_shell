#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _print_a_char(char c);
int _print_an_int(int c);
void _print_str(char *str);
int _strlength(char *str);
void _swap(int *a, int *b);
char *_capitalize_first_word(char *str);
char *_strcpy(char *str1, char *str2);

#endif
