#include "main.h"
/**
 * put_next_hn - more handl
 * @format: format string
 * @specifier: the speci
 * @buffer: the bufiif
 * @counter: calculate number of char
 * Return: the counter
 */
int put_next_hn(va_list specifier, char *format, char *buffer, int counter)
{
	switch (*format)
	{
		case 'h':
			switch (*(format + 1))
			{
				case 'd':
					counter = _put_hdecimal(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'i':
					counter = _put_hi(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'u':
					counter = _put_hunsigned(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'o':
					counter = _put_hocta(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'x':
					counter = _put_hhexa(va_arg(specifier, int), counter, buffer);
					format++;
					break;
				case 'X':
					counter = _put_hhexa_cap(va_arg(specifier, int), counter, buffer);
					format++;
					break;
			}
			break;
		default:
			counter = put_next_hl(specifier, format, buffer, counter);
			break;
	}
	return (counter);
}
