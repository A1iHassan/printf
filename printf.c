#include "main.h"
#include <stdarg.h>
/**
 * _printf - printf function
 * @format: format string
 * @...: args
 * Return: counter
*/

int _printf(char *format, ...)
{
	va_list specifier;
	char buff[BUFFER_SIZE];
	cr counts = {0, 0};
	int count;
	int ret;

	va_start(specifier, format);
	if (_strlen(format) == 0 || format == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*format)
	{
		if (*format == '%')
		{
			counts = deal_with_spec(specifier, (format + 1), buff, counts);
			format++;
		}
		else
		{
			counts = _putchar(*format, buff, counts);
		}
		format++;
	}
	count = counts.counter;
	ret = counts.ret_count;
	write(1, buff, count);
	return (ret);
}
