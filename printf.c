/* @Torin go ahead and add betty commments to the functions and structs in the code*/
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *fstr, ...)
{
	int total = 0, pos = 0;
	char current, next;
	va_list flist;
	void *param;

	if (fstr == NULL)
		return (-1);

	current = fstr[pos];
	if (current == '\0')
		return (0);

	va_start(flist, fstr);
	while (current != '\0')
	{
		if (current == '%')
		{
			next = fstr[pos + 1];
			if (next == 'c' ||
				next == 's')
			{
				param = va_arg(flist, void *);
				total += handle_format(next, param);
			}
			else if (next == '\0')
				total += _putchar(current);
				return (total);
			else
			{
				total += _putchar(current);
				if (next != '%')
					total += _putchar(next);
			}
			pos++;
		}
		else
			total += _putchar(current);

		pos++;
		current = fstr[pos];
	}

	va_end(flist);
	return (total);
}
