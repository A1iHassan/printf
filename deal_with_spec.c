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

cr deal_with_spec(va_list specifier, char *format, char *buffer, cr counts)
{
	cr new_counts;

	switch (*format)
	{
		case 'c':
			new_counts = _putchar(va_arg(specifier, int), buffer, counts);
			format++;
			break;
		case 's':
			new_counts = _puts(va_arg(specifier, char *), buffer, counts);
			format++;
			break;
		case '%':
			new_counts = _put_pers(counts, buffer);
			format++;
			break;
		default:
			new_counts = put_next_spec(specifier, format, buffer, counts);
			break;


	}
	return (new_counts);
}
