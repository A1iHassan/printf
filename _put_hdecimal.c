#include "main.h"

/**
 * _put_hdecimal - print short
 * @a: num
 * @counter: counter
 * @buf: the buffer
 * Return: counter
 */
cr _put_hdecimal(short int a, cr counter, char *buf)
{
	cr new_counter, holder;

	holder = counter;
	if (a < 0)
	{
		new_counter = _putchar('-', buf, holder);
		holder = new_counter;
		a = -a;
	}
	if (a > 9)
	{
		new_counter = _put_decimal(a / 10, counter, buf);
		holder = new_counter;
	}
	new_counter = _putchar('0' + (a % 10), buf, holder);

	return (new_counter);
}
