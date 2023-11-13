#include "main.h"

/**
 * printf_chara - prints a char.
 * @valeur: arguments.
 * Return: 1.
 **/
int printf_chara(va_list valeur)
{
	char s;

	s = va_arg(valeur, int);
	_putchar(s);
	return (1);
}
