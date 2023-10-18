#include "main.h"

/**
 * _put_hunsigne - unsigned num
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
cr _put_hunsigne(short int a, cr counter, char *buf)
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
