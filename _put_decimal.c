#include "main.h"

/**
 * _put_decimal - handle d
 * @a: number
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */
int _put_decimal(long a, int counter, char *buf)
{
	if (a < 0)
	{
		counter = _putchar('-', buf, counter);
		a = -a;
	}
	if (a > 9)
		counter = _put_decimal(a / 10, counter, buf);
	counter = _putchar('0' + (a % 10), buf, counter);

	return (counter);
}
