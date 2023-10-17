#include "main.h"
/**
 * put_next_hl - handling
 * @format: format string
 * @specifier: the speci to handl
 * @buffer: the buff
 * @counter: counter to return num of chars
 * Return: counter
 */
int put_next_hl(va_list specifier, char *format, char *buffer, int counter)
{
	switch (*format)
	{
		case '+':
			switch (*(format + 1))
			{
				case 'l':
					counter = _put_plus(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				default:
					counter = _put_plus(va_arg(specifier, int), counter, buffer);
					format++;
					break;
			}
			break;
		case ' ':
			switch (*(format + 1))
			{
				case 'l':
					counter = _put_space(va_arg(specifier, long), counter, buffer);
					format++;
					break;
				default:
					counter = _put_space(va_arg(specifier, int), counter, format);
					format++;
					break;
			}
			break;
	}
	return (counter);
}
