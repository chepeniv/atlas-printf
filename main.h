#ifndef MAIN_H
#define MAIN_H

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

