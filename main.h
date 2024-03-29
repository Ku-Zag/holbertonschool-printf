#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);

typedef struct type_s
{
	char *t;
	int (*f)(va_list);
} func_t;
int (*get_func(const char *format))(va_list);
int _write(char c);
int print_str(va_list args);
int print_char(va_list args);
int print_fs(va_list args);
int print_int(va_list args);
#endif
