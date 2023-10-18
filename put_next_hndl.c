#include "main.h"
/**
 * put_next_hndl - handle speci
 * @format: format string
 * @specifier: the speci
 * @buffer: the buffer
 * @counter: counter
 * Return: the counter
 */
cr put_next_hndl(va_list specifier, char *format, char *buffer, cr counter)
{
	cr new_counter;

	switch (*format)
	{
		case 'l':
			switch (*(format + 1))
			{
				case 'd':
					new_counter = _put_decimal(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'i':
					new_counter = _put_i(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'u':
					new_counter = _put_uunsigne(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'o':
					new_counter = _put_octa(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'x':
					new_counter = _put_hexa(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'X':
					new_counter = _put_hexa_cap(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				default:
					new_counter = put_next_hn(specifier, format, buffer, counter);
					break;
			}

	}
	return (new_counter);
}
