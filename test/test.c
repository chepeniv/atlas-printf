#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len, len2;
	/*
	unsigned int ui;
	void *addr;
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	*/

	len = _printf("the quick brown fox jumped over the lazy dog.1\n");
	len2 = printf("the quick brown fox jumped over the lazy dog.2\n");
	printf("\n_printf: %d chars ; printf: %d chars\n\n", len, len2);

	len = _printf("A");
	len2 = printf("B");
	printf("\n_printf: %d chars ; printf: %d chars\n\n", len, len2);

	len = _printf("\0");
	len2 = printf("\0");
	printf("\n_printf: %d chars ; printf: %d chars\n\n", len, len2);

	/*
	len = _printf("Strings:[%s -- %s]\n", "I am a string!", "i am another string!");
	len2 = printf("Strings:[%s -- %s]\n", "I am a string!", "i am another string!");

	printf("\n_printf: %d chars ; printf: %d chars\n\n", len, len2);

	_printf("Percent:[%%]\n");
	_printf("Unknowns:[%r%q%>]\n");
	_printf("Character:[%c, %c, %c]\n", 'H', 'J', 'K');

	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Address:[%p]\n", addr);
	_printf("Len:[%d]\n", len);
	*/

	return (0);
}
