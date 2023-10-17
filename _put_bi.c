#include "main.h"

/**
 * _put_bi - bla bla
 * @a: bla
 * @counter: bla
 * @buf: bla bla
 * Return: counter
 */
int _put_bi(unsigned int a, int counter, char *buf)
{
	if (a > 1)
	{
		counter = _put_bi(a / 2, counter, buf);
	}

	counter = _putchar('0' + (a % 2), buf, counter);

	return (counter);
}
