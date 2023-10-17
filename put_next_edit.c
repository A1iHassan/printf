#include "main.h"
/**
 * put_next_edit - handle the specifier
 * @format: format string
 * @specifier: the speci
 * @buffer: the buff
 * Return: the counter
 */
int put_next_edit(va_list specifier, char *format, char *buffer, int counter)
{
	switch (*format)
	{
		case 'X':
			counter = _put_hexa_cap(va_arg(specifier, unsigned int), counter, buffer);
			format++;
			break;
		case 'u':
			counter = _put_unsigned(va_arg(specifier, unsigned int), counter, buffer);
			format++;
			break;
		case 'S':
			counter = _put_S(va_arg(specifier, char *), counter, buffer);
			format++;
			break;
		case 'p':
			counter = put_addr(va_arg(specifier, void *), counter, buffer);
			format++;
			break;
		case 'r':
			counter = _put_rev(va_arg(specifier, char *), counter, buffer);
			format++;
			break;
		case 'R':
			counter = _put_rot(va_arg(specifier, char *), buffer, counter);
			format++;
			break;
		default:
			counter = put_next_hndl(specifier, format, buffer, counter);
			break;
	}
	return (counter);
}
