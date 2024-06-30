#include "main.h"

/**
 * print_int - printout number to terminal using _putchar
 * @n: the number to print
 *
 * Return: void
 */
int print_int(int n)
{
	int total = 0;

	if (n < 0)
	{
		total += _putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		total += _putchar('0');
		return total;
	}
	if (n / 10)
	{
		total += print_int(n / 10);
	}

	total += _putchar(n % 10 + '0');
	return total;
}
