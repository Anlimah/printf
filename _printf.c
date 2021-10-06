#include "main.h"

/*
* _printf is the function that selects right output format
@format: identifier to look for.
Return: the length of the string.
*/

int _printf(const char *format, ...) {
    
    printf_match match[] = {
        {"%c", printf_char},
        {"%s", printf_string},
        {"%%", printf_percent}
    }


	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 3;
		while (j >= 0)
		{
			if (match[j].id[0] == format[i] && match[j].id[1] == format[i + 1])
			{
				len += match[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}