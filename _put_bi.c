#include "main.h"

/**
 * _put_bi - bla bla
 * @a: bla
 * @counter: bla
 * @buf: bla bla
 * Return: counter
*/
cr _put_bi(unsigned int a, cr counter, char *buf)
{
	cr new_counts, holder;

	holder = counts;
	if (a > 1)
	{
		new_counts = _put_bi(a / 2, holder, buf);
		holder = new_counts;
	}

	new_counts = _putchar('0' + (a % 2), buf, holder);

	return (new_counts);
}
