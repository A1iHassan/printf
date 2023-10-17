#include "main.h"

/**
 * _put_plus - print plus
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
int _put_plus(long a, int counter, char *buf)
{
	if (a > 0)
	{
		counter = _putchar('+', buf, counter);
	}
	counter = _put_i(a, counter, buf);
	return (counter);
}
