#include "main.h"
/**
 * print_integer - prints integer
 * @args: argument to print
 * * n: The integer to be printed.
 * last: The last digit of n.
 * num: variable used in the process of printing n.
 * digit:  variable used to store each digit of n.
 * z: A variable used to calculate the power of 10 for each digit of n.
 * i: A counter for the number of characters printed.
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);

	int num, last = n % 10, digit, z = 1, i = 1;

	n = n / 10;

	num = n;

	if (last < 0)
	{
		_puttchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num != 0)
	{
		while (num / 10 != 0)
		{
			z = z * 10;
			num = num / 10;
		}
		num = n;
		while (z > 0)
		{
			digit = num / z;
			_puttchar(digit + '0');
			num = num - (digit * z);
			z = z / 10;
			i++;
		}
	}
	_puttchar(last + '0');

	return (i);
}

/**
 * print_decimal - prints decimal
 * @args: argument to print
 * * n: The integer to be printed.
 * last: The last digit of n.
 * num: variable used in the process of printing n.
 * digit:  variable used to store each digit of n.
 * z: A variable used to calculate the power of 10 for each digit of n.
 * i: A counter for the number of characters printed.
 * Return: number of characters printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, z = 1, i = 1;

	n = n / 10;

	num = n;

	if (last < 0)
	{
		_puttchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num != 0)
	{
		while (num / 10 != 0)
		{
			z = z * 10;
			num = num / 10;
		}
		num = n;
		while (z > 0)
		{
			digit = num / z;
			_puttchar(digit + '0');
			num = num - (digit * z);
			z = z / 10;
			i++;
		}
	}
	_puttchar(last + '0');

	return (i);
}
