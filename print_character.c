#include "main.h"

/**
 * print_character - Entry point
 *
 * description: a function that prints character
 *
 * @args: arguments
 *
 * Return: character
 */

int print_character(va_list args)
{
	char c;

	c = va_arg(args, int);

	_puttchar(c);
	return (1);
}
