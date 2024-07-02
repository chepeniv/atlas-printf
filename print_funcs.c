/* @Torin go ahead and add betty commments to the functions and structs in the code*/
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - prints a single character
 *
 * Description: This function takes a character, allocates memory
 * for the character's value, the prints the character when necessary in
 * the _printf function. After printing, the memory is then freed.
 *
 * @param: pointer to printable character
 */

int print_char(void *param)
{
	char *cptr;
	char c;

	cptr = malloc(sizeof(void*));
	*cptr = (size_t) param;
	c = *cptr;
	free(cptr);

	_putchar(c);
	return 1;
}

int print_str(void *param)
{
	char c;
	int i = 0, total = 0;
	char *cstr = (char *) param;

	if (cstr == (char *) 0)
		cstr = "(null)";

	while (cstr[i] != '\0')
	{
		c = cstr[i];
		total += _putchar(c);
		i++;
	}

	return (total);
}

int print_dec(void *param)
{
	int n = (size_t) param;
	return print_int(n);
}
