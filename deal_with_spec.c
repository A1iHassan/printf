#include "main.h"
#include <stdarg.h>

/**
 * deal_with_spec - handle specifier
 * @specifier: specifier to handle
 * @format: format string
 * Return: the counter
 * @counter: counter
 * @buffer: the buffer
 */

int deal_with_spec(va_list specifier, char *format, char *buffer, int counter)
{
	switch (*format)
	{
		case 'c':
			counter = _putchar(va_arg(specifier, int), buffer, counter);
			format++;
			break;
		case 's':
			counter = _puts(va_arg(specifier, char *), buffer, counter);
			format++;
			break;
		case '%':
			counter = _put_pers(counter, buffer);
			format++;
			break;
		default:
			counter = put_next_spec(specifier, format, buffer, counter);
			break;


	}
	return (counter);
}
