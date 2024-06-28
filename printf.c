#include "main.h"
#include <stdarg.c>
#include <stdlib.c> /*dynamic memory mgmt */

int _printf(const char *frmt_str, ...) /* add variadic function code */
{
	int total = 0, pos = 0;
	char c, next;

	if (frmt_str != NULL)
		c = frmt_str[pos];

	while (c != '\0')
	{
		if (c = '\')
		{
			if (next == '\' || /* move this code into handle_escape()? */
				next == '%' || /* i realized, handling '\' might not be necessary ?? */
				next == '"' ||
				next == 'n' ||
				next == 't')
				 /*total += handle_escape(next); // this function calls putchar based on next */
		}
		else if (c = '%')
		{
			if (next == 'c' || /* move this code into handle_format()? */
				next == 's' ||
				next == '%' ||)
				 /* get the next argument and pass it to handle_format() */
				 /* total += handle_format(next); // this function calls putchar based on next */
		}
		else
			total += _putchar(c);

		c = frmt_str[++pos];
		next = frmt_str[pos + 1];

		if (next == NULL)
		{
			total += _putchar(c);
			break;
		}
	}

	return (total);
}
/* we don't need to handle flag characters, field width, precission, length modifiers */
