#include "main.h"

/**
 * _put_S - print string
 * @str: pointer
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */

cr _put_S(char *str, cr counter, char *buf)
{
	cr new_counter, holder;
	int i;

	holder = counter;
	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			new_counter = _putchar(*str, buf, holder);
			holder = new_counter;
		}
		else
		{
			i = *str;
			new_counter = _putchar('\\', buf, holder);
			holder = new_counter;
			new_counter = _putchar('x', buf, holder);
			holder = new_counter;
			if (*str < 0x10)
			{
				new_counter = _putchar('0', buf, holder);
				holder = new_counter;
				new_counter = _put_hexa_cap(i, holder, buf);
				holder = new_counter;
			}
		}
		str++;
	}
	return (new_counter);
}
