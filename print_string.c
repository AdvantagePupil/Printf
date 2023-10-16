#include "main.h"

/**
 * print_string - Entry point
 *
 * description: a function that prints a string
 *
 * @args: string
 *
 * Return: length of string
 */

int print_string(va_list args)
{
	char *str;

	int count;

	int i;

	count = 0;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";

		count = _stringlen(str);

		for (i = 0; i < count; i++)
		{
			_puttchar(str[i]);
		}
		return (count);
	}
	else
	{
		count = _stringlen(str);
		for (i = 0; i < count; i++)
	{
			_puttchar(str[i]);
		}
		return (count);
	}
}
