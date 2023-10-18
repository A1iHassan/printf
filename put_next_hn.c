#include "main.h"
/**
 * put_next_hn - more handl
 * @format: format string
 * @specifier: the speci
 * @buffer: the bufiif
 * @counter: calculate number of char
 * Return: the counter
 */
cr put_next_hn(va_list specifier, char *format, char *buffer, cr counter)
{
	cr new_counter;

	switch (*format)
	{
		case 'h':
			switch (*(format + 1))
			{
				case 'd':
					new_counter = _put_hdecimal(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'i':
					new_counter = _put_hi(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'u':
					new_counter = _put_hunsigne(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'o':
					new_counter = _put_hocta(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'x':
					new_counter = _put_hhexa(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'X':
					new_counter = _put_hhexa_cap(va_arg(specifier, int), counter, buffer);
					format++;
					break;
			}
			break;
		default:
			new_counter = put_next_hl(specifier, format, buffer, counter);
			break;
	}
	return (new_counter);
}
