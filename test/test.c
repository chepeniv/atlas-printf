#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//int len;
	//unsigned int ui;
	//void *addr;

	//ui = (unsigned int)INT_MAX + 1024;
	//addr = (void *)0x7ffe637541f0;

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c, %c, %c]\n", 'H', 'J', 'K');
	_printf("Strings:[%s -- %s]\n", "I am a string!", "i am another string!");
	_printf("Percent:[%% - \%]\n");
	_printf("Unknowns:[%r%q%>]\n");
	//_printf("Length:[%d, %i]\n", len, len);
	//_printf("Negative:[%d]\n", -762534);
	//_printf("Unsigned:[%u]\n", ui);
	//_printf("Unsigned octal:[%o]\n", ui);
	//_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	//_printf("Address:[%p]\n", addr);


	//_printf("Len:[%d]\n", len);

	return (0);
}
