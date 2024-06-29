/* @Torin go ahead and add betty commments to the functions and structs in the code*/
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int print_char(void *param)
{
	long int c;
	c = (long int) param;

	return _putchar(c);
	/*(write(filedesc, &c, bytes));*/
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
