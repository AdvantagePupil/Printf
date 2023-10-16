#include "main.h"

/**
 * _puttchar - Entry point
 *
 * description: a function that prints a single char
 *
 * @c: char
 *
 * Return: a single char
 */

int _puttchar(char c)
{
	return (write(1, &c, 1));
}
