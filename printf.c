#include "main.h"
#include <stdarg.c> /*variadic function macros */
#include <stdlib.c> /*dynamic memory mgmt */
/* #include <unistd.h> // write() function -- used by putchar.c */

int _printf(const char *frmt_str, ...)
{
	int total = 0, pos = 0; /* don't count the null-byte */
	char c, next;
	char escapes[] = {'\', '%', 'n', 't', '"'};
	char formats[] = {'c', 's', '%'}; /* create functions for each case ?? */

	if (frmt_str != NULL)
		c = frmt_str[pos];

	while (c != '\0')
	{
		if (c = '\')
		{
			/* if next is in escapes :
			 * 		total = handle_escape(next); // this function calls putchar based on next
			 */
		}
		else if (c = '%')
		{
			/* if next is in escapes :
			 * 		total = handle_format(next); // this function calls putchar based on next
			 */
		}
		else
		{
			total += _putchar(c);
		}

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

/* null-mandates (things we don't need to do)
 * 		reproduce c's printf's buffer handling
 * 		handle flag characters, field width, precission, length modifiers
 */
