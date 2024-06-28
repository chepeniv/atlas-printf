typedef struct _formater {
	char type;
	int (*printer)(void *);
} formater;

int handle_format(char next, void *param)
{
	int total = 0;
	int i = 0;
	int (*p)(void *);

	formater printfuncs[] = {
		{'c', print_char},
		{'s', print_str},
		{NULL, NULL}
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

	p(param);

	return (total);
}

//int (*get_op_func(char *s))(int, int);
