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
char *_strdup(char *original);

#endif

