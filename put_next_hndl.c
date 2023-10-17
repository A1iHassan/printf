#include "main.h"
/**
 * put_next_hndl - handle speci
 * @format: format string
 * @specifier: the speci
 * @buffer: the buffer
 * @counter: counter
 * Return: the counter
 */
int put_next_hndl(va_list specifier, char *format, char *buffer, int counter)
{
	switch (*format)
	{
		case 'l':
			switch (*(format + 1))
			{
				case 'd':
					counter = _put_decimal(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'i':
					counter = _put_i(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'u':
					counter = _put_uunsigne(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'o':
					counter = _put_octa(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'x':
					counter = _put_hexa(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				case 'X':
					counter = _put_hexa_cap(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				default:
					counter = put_next_hn(specifier, format, buffer, counter);
					break;
			}

	}
	return (counter);
}
