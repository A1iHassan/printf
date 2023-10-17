#include "main.h"

/**
 * _put_space - put space
 * @a: num
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */
int _put_space(long a, int counter, char *buf)
{
	if (a > 0)
	{
		counter = _putchar(' ', buf, counter);
	}
	counter = _put_i(a, counter, buf);

	return (counter);
}
