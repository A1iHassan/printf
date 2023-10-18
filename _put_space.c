#include "main.h"

/**
 * _put_space - put space
 * @a: num
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */
cr _put_space(long a, cr counter, char *buf)
{
	cr new_counter, holder;

	holder = counter;
	if (a > 0)
	{
		new_counter = _putchar(' ', buf, holder);
		holder = new_counter;
	}
	new_counter = _put_decimal(a, holder, buf);

	return (new_counter);
}
