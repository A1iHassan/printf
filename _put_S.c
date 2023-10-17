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

	do {
		if (*str == '\0' && (*(str + 1) >= 32 && *(str + 1) < 127))
		{
			if (*(str + 1) == '%' && *(str + 2) == 'S')
				break;
			counter = _putchar('\\', buf, counter);
			counter = _putchar('x', buf, counter);
			counter = _putchar('0', buf, counter);
			counter = _putchar('0', buf, counter);
			str++;
		}
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
		if (*str == '\0' && (*(str + 1) >= 32 && *(str + 1) < 127))
		{
			if (*(str + 1) == '%' && *(str + 2) == 'S')
				break;
			counter = _putchar('\\', buf, counter);
			counter = _putchar('x', buf, counter);
			counter = _putchar('0', buf, counter);
			counter = _putchar('0', buf, counter);
			str++;
		}
	} while (*str);
	return (counter);
}
