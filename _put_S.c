#include "main.h"

/**
 * _put_S - print string
 * @str: pointer
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */

int _put_S(char *str, int counter, char *buf)
{
	int i;

	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			counter = _putchar(*str, buf, counter);
		}
		else
		{
			i = *str;
			counter = _putchar('\\', buf, counter);
			counter = _putchar('x', buf, counter);
			if (*str < 0x10)
			{
				counter = _putchar('0', buf, counter);
				counter = _put_hexa_cap(i, counter, buf);
			}
		}
		str++;
	}
	return (counter);
}
