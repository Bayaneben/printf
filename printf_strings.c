#include "main.h"
/**
 * printf_strings - print a string.
 * @valeur: argumen t.
 * Return: the length of the string.
 */

int printf_strings(va_list valeur)
{
	char *s;
	int i, len;

	s = va_arg(valeur, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
