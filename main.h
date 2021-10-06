#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_percent(void)
/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct format
{
	char *sc;
	int (*f)(va_list);
} printf_format;

#endif 
