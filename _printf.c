#include "main.h"

/**
 * _printf - Entry point
 *
 * description: a ffunction similar to printf
 *
 * @format: pointer
 *
 * Return: a count of the characters printed
 */

int _printf(const char *format, ...)
{
	specifier form[] = {
		{"%c", print_character},
		{"%s", print_string},
		{"%%", print_percentage},
		{"%d", print_decimal},
		{"%i", print_integer}
	};
/** n = the number of arguments in the variable form[] */

	va_list args;

	int i = 0, length = 0, n;

	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

here:
	while (format[i] != '\0')
	{
		n = 4;
		while (n >= 0)
		{
		if (form[n].str[0] == format[i] && form[n].str[1] == format[i + 1])
		{
			length = length + form[n].x(args);

			i = i + 2;
			goto here;
		}
		n--;
		}
		_puttchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
