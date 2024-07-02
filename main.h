#ifndef MAIN_H
#define MAIN_H

/**
 * struct_formater - this is a struct to be utilized in our code
 * it sets a char for expected type and points to a printer function
 * 
 */
typedef struct _formater {
	char type;
	int (*printer)(void *);
} formater;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_format(char next, void *param);
int print_char(void *param);
int print_str(void *param);
int print_dec(void *param);
int print_int(int n);
int print_neg(int n);

#endif

