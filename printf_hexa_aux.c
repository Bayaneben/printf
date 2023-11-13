#include "main.h"

/**
 * printf_hexa_aux - prints an hexgecimal number.
 * @number: arguments.
 * Return: counter.
 **/
int printf_hexa_aux(unsigned long int number)
{
	long int i;
	long int *array;
	long int count = 0;
	unsigned long int temp = number;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(long int));
	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
