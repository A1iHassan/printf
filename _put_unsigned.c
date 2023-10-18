#include "main.h"

/**
 * _put_uunsigne - print unsigned num
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
cr _put_uunsigne(long a, cr counter, char *buf)
{
	cr new_counter, holder;

	holder = counter;
	if (a > 9)
	{
		new_counter = _put_decimal(a / 10, holder, buf);
		holder = new_counter;
	}
	new_counter = _putchar('0' + (a % 10), buf, holder);

	return (new_counter);
}
