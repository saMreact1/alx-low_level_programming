#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: value that the function perform operation
 * Return: return the integer value 0
 */
int print_last_digit(int x)
{
	int j;

	if (x < 0)
	{
		x = -x;
	}
	j = x % 10;

	if (j < 0)
	{
		j = -j;
	}

	_putchar(j + '0');

	return (j);

}
