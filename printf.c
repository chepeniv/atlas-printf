#include "main.h"
#include <stdarg.c> /*variadic function macros */
#include <stdlib.c> /*dynamic memory mgmt */
/* #include <unistd.h> // write() function -- used by putchar.c */

int _printf(const char *frmt_str, ...)
{
	int total = 0, pos = 0; /* don't count the null-byte */
	char c;
	char escapes[] = {'\', '%', 'n', 't', '"'};
	char formats[] = {'c', 's', '%'};

	if (frmt_str != NULL)
		c = frmt_str[pos];

	while (c != '\0')
	{
		if (c = '\')
		{
			/* access the following char in the string
			 * check if it is in escapes[]
			 */
		}
		else if (c = '%')
		{
			/* access the following char in the string
			 * check if it is in formats[]
			 */
		}
		else
		{
			_putchar(c);
			total++;
		}

		c = frmt_str[++pos];
	}

	return (total);
}

/* null-mandates (things we don't need to do)
 * 		reproduce c's printf's buffer handling
 * 		handle flag characters, field width, precission, length modifiers
 */
