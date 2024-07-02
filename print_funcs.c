/* @Torin go ahead and add betty commments to the functions and structs in the code*/
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* print_char - prints a single character
*
* Description: This function takes a character, allocates memory
* for the character's value, the prints the character when necessary in
* the _printf function. After printing, the memory is then freed.
*
* @param: pointer to printable character
*
* Return: returns 1 on success
*/

int print_char(void *param)
{
	char *cptr;

	char c;

	cptr = malloc(sizeof(void *));
	*cptr = (size_t) param;
	c = *cptr;
	free(cptr);

	_putchar(c);
	return (1);
}

/**
* print_str - prints a string
*
* Description: this function accepts a pointer to a string.
* if the string is NULL it prints "(null)"
* This function iterates through the string one character at a time
* and prints them using _putchar.
*
* @param: the parameter for print_str; a pointer to the string to be printed
*
* Return: The function return the number of characters printed
*/

int print_str(void *param)
{
	char c;

	int i = 0, total = 0;

	char *cstr = (char *) param;

	if (cstr == (char *) 0)
		cstr = "(null)";

	while (cstr[i] != '\0')
	{
		c = cstr[i];
		total += _putchar(c);
		i++;
	}

	return (total);
}

/**
* print_dec - prints an int as a decimal
*
* Description: The function has a param of a pointer to an int
* it treats it as an integer to be printed. This function calls
* print_int to actually print the value.
*
* @param: pointer to the integer value to be printed
*
* Return: returns the result of print_int with the cast value
* of this function
*/

int print_dec(void *param)
{
	int n = (size_t) param;

	return (print_int(n));

}
