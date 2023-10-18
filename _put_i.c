#include "main.h"

/**
 * _put_i - hanle i
 * @a: number
 * @counter: the counter
 * @buf: the buffer
 * Return: counter
 */
cr _put_i(long a, cr counter, char *buf)
{
	cr new_counter;
	long *i = &a;
	long j = *i;

	new_counter = _put_decimal(j, counter, buf);

	return (new_counter);
}

