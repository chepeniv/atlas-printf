int handle_format(char next, va_list flist)
{
	int total = 0;


	return (total);
}

struct formater {
	char type;
	void *argument;
	int (*printer)(void *);
}
