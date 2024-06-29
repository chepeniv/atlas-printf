#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int print_char(void *param)
{
	char c = (char *) param;
	return (_putchar(c));
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
