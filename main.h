#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/* a structure to be able to use the specifiers */

typedef struct format
{
	char *str;
	int (*x)();
} specifier;

int _printf(const char *format, ...);

/** similar to putchar function */
int _puttchar(char c);

/** conversion specifier */
int print_character(va_list args);
int print_string(va_list args);
int print_percentage(void);

/** string length */
int _stringlen(char *str);
int _stringlength(const char *str);

#endif
