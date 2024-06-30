#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	/*
	int len, len2;
	unsigned int ui;
	void *addr;
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	len = _printf("the quick brown fox jumped over the lazy dog.A\n");
	len2 = printf("the quick brown fox jumped over the lazy dog.B\n");
	printf("_printf: %d chars ; printf: %d chars\n", len, len2);

	_printf("1: A : ");
	_printf("A");

	_printf("\n2: null : ");
	_printf("\0");

	_printf("\n3: S : ");
	_printf("%c", 'S');

	_printf("\n4: % : ");
	_printf("%%");
	*/
	_printf("null : ");
	_printf("%c", '\0');

	_printf("\n% : ");
	_printf("%");
	_printf("\n");
	/*
	_printf("\n7: newline : ");
	_printf("\n");

	_printf("\n7: (char *) 0: ");
	_printf("%s\n", (char *) 0);

	len = _printf("Strings:[%s -- %s]\n", "I am a string!", "i am another string!");
	len2 = printf("Strings:[%s -- %s]\n", "I am a string!", "i am another string!");

	printf("\n_printf: %d chars ; printf: %d chars\n\n", len, len2);

	_printf("Percent:[%%]\n");
	_printf("Unknowns:[%r%q%>]\n");
	_printf("Character:[%c, %c, %c]\n", 'H', 'J', 'K');

	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
	*/

	_printf("my MAX:[%d]\n", INT_MAX);
	_printf("my MIN:[%d]\n", INT_MIN);
	_printf("MIN + MAX = -1:%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	printf("MAX:[%d]\n", INT_MAX);
	printf("MIN:[%d]\n", INT_MIN);

	/*
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Address:[%p]\n", addr);
	*/
	return (0);
}
