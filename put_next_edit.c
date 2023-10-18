#include "main.h"
/**
 * put_next_edit - handle the specifier
 * @format: format string
 * @specifier: the speci
 * @buffer: the buff
 * @counter: returns the output count
 * Return: the counter
 */
cr put_next_edit(va_list specifier, char *format, char *buffer, cr counter)
{
	cr new_counter;

	switch (*format)
	{
		case 'X':
			new_counter = _put_hexa_cap(va_arg(specifier, unsigned int),
					counter, buffer);
			format++;
			break;
		case 'u':
			new_counter = _put_uunsigne(va_arg(specifier, unsigned int),
					counter, buffer);
			format++;
			break;
		case 'S':
			new_counter = _put_S(va_arg(specifier, char *), counter, buffer);
			format++;
			break;
		case 'p':
			new_counter = put_addr(va_arg(specifier, void *), counter, buffer);
			format++;
			break;
		case 'r':
			new_counter = _put_rev(va_arg(specifier, char *), counter, buffer);
			format++;
			break;
		case 'R':
			new_counter = _put_rot(va_arg(specifier, char *), buffer, counter);
			format++;
			break;
		default:
			new_counter = put_next_hndl(specifier, format, buffer, counter);
			break;
	}
	return (new_counter);
}
