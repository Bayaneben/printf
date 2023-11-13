#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: ch.
 */
int _strlen(char *s)
{
	int ch;

	for (ch = 0; s[ch] != 0; ch++)
		;
	return (ch);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: ch
 */
int _strlenc(const char *s)
{
	int ch;

	for (ch = 0; s[ch] != 0; ch++)
		;
	return (ch);
}
