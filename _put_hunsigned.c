#include "main.h"

/**
 * _put_hunsigne - unsigned num
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
int _put_hunsigne(short int a, int counter, char *buf)
{
	if (a > 9)
	{
		counter = _put_decimal(a / 10, counter, buf);
		counter = _putchar('0' + (a % 10), buf, counter);
	}
	return (counter);
}
