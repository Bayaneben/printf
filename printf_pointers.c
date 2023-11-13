#include "main.h"

/**
 * printf_pointers - prints an hexgecimal number.
 * @valeur: arguments.
 * Return: count.
 */
int printf_pointers(va_list valeur)
{
	void *q;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	q = va_arg(valeur, void*);
	if (q == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)q;
	_putchar('0');
	_putchar('x');
	b = printf_hexa_aux(a);
	return (b + 2);
}
