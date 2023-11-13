#include "main.h"
/**
 * _printf - is a function that can select the correct function to print to user.
 * @forma: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const forma, ...)
{
	convert_match m[] = {
		{"%s", printf_strings}, {"%c", printf_chara},
		{"%%", printf_n37},
		{"%i", printf_integer}, {"%d", printf_deci}, {"%r", printf_sre},
		{"%R", printf_rota13}, {"%b", printf_bina}, {"%u", printf_unsign},
		{"%o", printf_octet}, {"%x", printf_hexa}, {"%X", printf_HEXA},
		{"%S", printf_exclusif_string}, {"%p", printf_pointers}
	};

	va_list arg;
	int i = 0, j, len = 0;

	va_start(arg, forma);
	if (forma == NULL || (forma[0] == '%' && forma[1] == '\0'))
		return (-1);

Here:
	while (forma[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == forma[i] && m[j].id[1] == forma[i + 1])
			{
				len += m[j].f(arg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(forma[i]);
		len++;
		i++;
	}
	va_end(arg);
	return (len);
}
