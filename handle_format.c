#include "main.h"

int handle_format(char next, void *param)
{
	int total = 0;
	int i = 0;
	int (*p)(void *);

	formater printfuncs[] = {
		{'c', print_char},
		{'s', print_str},
	};

	while (i < 3)
	{
		if (next == (printfuncs[i].type))
		{
			p = printfuncs[i].printer;
			break;
		}
		i++;
	}

	total += p(param);

	return (total);
}
