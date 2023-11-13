#include "main.h"
/**
 * printf_unsign - prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int printf_unsign(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int number, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	number = n;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		last = -last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = n;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
