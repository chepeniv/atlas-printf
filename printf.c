#include "main.h"
#include <stdarg.c>
#include <stdlib.c>
/* we don't need to handle flag characters, field width, precission, length modifiers */

int _printf(const char *fstr, ...)
{
	int total = -1, pos = 0;
	char current, next, print;
	va_list flist, fldup;
	void *param;

	if (fstr == NULL)
		return (total);

	current = fstr[pos];
	if (current == '\0')
	{
		total +=_putchar(current);
		return (total);
	}

	next = fstr[pos + 1];
	va_start(flist, fstr);
	while (next != '\0')
	{
		if (current == '%')
		{
			if (next == 'c' ||
				next == 's')
			{
				/* i wonder if this is legal */
				param = va_arg(flist, void *);
				total += handle_format(next, param);
			}
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
		next = fstr[pos + 1];
	}

	total += _putchar(current);
	total += _putchar(next);
	va_end(flist);
	return (total);
}
