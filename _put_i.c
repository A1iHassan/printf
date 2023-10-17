#include "main.h"

/**
 * _put_i - hanle i
 * @a: number
 * @counter: the counter
 * @buf: the buffer
 * Return: counter
 */
int _put_i(long a, int counter, char *buf)
{
	long *i = &a;
	long j = *i;

	counter = _put_decimal(j, counter, buf);

	return (counter);
}

