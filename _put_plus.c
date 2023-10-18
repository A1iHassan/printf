#include "main.h"

/**
 * _put_plus - print plus
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
cr _put_plus(long a, cr counter, char *buf)
{
	cr new_counter;

	if (a > 0)
	{
		new_counter = _putchar('+', buf, counter);
	}
	new_counter = _put_i(a, counter, buf);
	return (new_counter);
}
