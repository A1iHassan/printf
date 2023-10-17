#include "main.h"
#include <stdarg.h>
/**
 * _printf - printf function
 * @format: format string
 * @...: args
 * Return: counter
*/

int _printf(char *format, ...)
{
	va_list specifier;
	char buff[BUFFER_SIZE];
	int counter = 0;

	va_start(specifier, format);
	if (!format)
	{
		counter = _puts("(null)", buff, counter);
		return (counter);
	}
	while (*format)
	{
		if (*format == '%')
		{
			counter = deal_with_spec(specifier, (format + 1), buff, counter);
			format++;
		}
		else
		{
			counter = _putchar(*format, buff, counter);
		}
		format++;
	}
	flush(buff, counter);
	return (counter);
}
