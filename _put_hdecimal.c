#include "main.h"

/**
 * _put_hdecimal - print short
 * @a: num
 * @counter: counter
 * @buf: the buffer
 * Return: counter
 */
int _put_hdecimal(short int a, int counter, char *buf)
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
