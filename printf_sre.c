#include "main.h"

/**
 * printf_sre - function that prints a str in reverse
 * @arg: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_sre(va_list arg)
{

	char *s = va_arg(arg, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
