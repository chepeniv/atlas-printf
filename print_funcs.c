/* @Torin go ahead and add betty commments to the functions and structs in the code*/
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int print_char(void *param)
{
	char *cptr;
	char c;

	cptr = malloc(sizeof(void*));
	*cptr = (size_t) param;
	c = *cptr;
	free(cptr);

	if (c != '\0')
	{
		_putchar(c);
		return 1;
	}
	else
		return 0;
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
