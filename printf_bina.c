#include "main.h"

/**
 * printf_bina - prints a binary number.
 * @valeur: arguments.
 * Return: 1.
 **/
int printf_bina(va_list valeur)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(valeur, unsigned int);
	unsigned int q;

	for (i = 0; i < 32; i++)
	{
		q = ((a << (31 - i)) & num);
		if (q >> (31 - i))
		{
			flag = 1;
			if (flag)
			{
				b = q >> (31 - i);
				_putchar(b + 48);
				cont++;
			}
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
