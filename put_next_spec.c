#include "main.h"
/**
 * put_next_spec - handle the specifier
 * @format: format string
 * @specifier: specifier  to handle it
 * @buffer: the buffer
 * @counter: the counter
 * Return: the counter
 */
cr put_next_spec(va_list specifier, char *format, char *buffer, cr counter)
{
	cr new_counter;

	switch (*format)
	{
		case 'd':
			new_counter = _put_decimal(va_arg(specifier, int), counter, buffer);
			format++;
			break;
		case 'i':
			new_counter = _put_i(va_arg(specifier, int), counter, buffer);
			format++;
			break;
		case 'b':
			new_counter = _put_bi(va_arg(specifier, unsigned int), counter, buffer);
			format++;
			break;
		case 'o':
			new_counter = _put_octa(va_arg(specifier, unsigned int), counter, buffer);
			format++;
			break;
		case 'x':
			new_counter = _put_hexa(va_arg(specifier, unsigned int), counter, buffer);
			format++;
			break;
		default:
			new_counter = put_next_edit(specifier, format, buffer, counter);
			break;

	}
	return (new_counter);
}










