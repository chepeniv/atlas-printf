/* @Torin go ahead and add betty commments to the functions and structs in the code*/
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * handle_format - deterimines which printing function to call
 *
 * @next: the char by which the function to be called is decided
 * @param: a null pointer to be passed onto the function called
 *
 * Return: the total number of chars printed by the function called
 */
int handle_format(char next, void *param)
{
	int total = 0;
	int i = 0;
	int (*p)(void *);

	formater printfuncs[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'i', print_dec}
	};

	while (i < 5)
	{
		if (next == (printfuncs[i].type))
		{
			p = printfuncs[i].printer;
			break;
		}
		i++;
	}

	total += p(param);

	return (total);
}
