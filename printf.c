#include "main.h"
#include <stdarg.c>
#include <stdlib.c>
/* we don't need to handle flag characters, field width, precission, length modifiers */

int _printf(const char *fstr, ...)
{
	int total = 0, pos = 0;
	char current, next, print;
	va_list flist, flistcopy;

	if (fstr == NULL)
		return (-1);

	current = fstr[pos];
	va_start(flist, fstr);

	while (current != '\0')
	{
		if (current == '%')
		{
			if (next == 'c'
				next == 's')
			}
				va_copy(flistcopy, flist);
				total += handle_format(next, flistcopy);
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

		current = fstr[++pos];
		next = fstr[pos + 1];

		if (next == NULL)
		{
			total += _putchar(current);
			break;
		}
	}

	va_end(flist);
	return (total);
}
