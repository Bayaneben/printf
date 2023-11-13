#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf function
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 **/

typedef struct format
{
	char *id;
	int (*f)();

} convert_match;

int printf_pointers(va_list valeur);
int printf_hexa_aux(unsigned long int number);
int printf_HEXA_aux(unsigned int number);
int printf_exclusif_string(va_list valeur);
int printf_HEXA(va_list valeur);
int printf_hexa(va_list valeur);
int printf_octet(va_list valeur);
int printf_unsign(va_list args);
int printf_bina(va_list valeur);
int printf_sre(va_list args);
int printf_rota13(va_list args);
int printf_integer(va_list args);
int printf_deci(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_n37(void);
int printf_chara(va_list valeur);
int printf_strings(va_list valeur);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
