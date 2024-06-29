/* @Torin go ahead and add betty commments to the functions and structs in the code*/
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int print_char(void *param)
{
	char *c;
	c = malloc(sizeof(void*));
	*c = (size_t) param;

	if (c[0] != '\0')
	{
		_putchar(c[0]);
		free(c);
		return 1;
	}
	else
	{
		free(c);
		return 0;
	}
}

int print_str(void *param)
{
	char c;
	int i = 0, total = 0;
	char *cstr = (char *) param;

	while (cstr[i] != '\0')
	{
		c = cstr[i];
		total += _putchar(c);
		i++;
	}

	return (total);
}
