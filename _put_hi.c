#include "main.h"

/**
 * _put_hi - short int
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
cr _put_hi(short int a, cr counter, char *buf)
{
	cr new_counter;
	short int *i = &a;
	short int j = *i;

	new_counter = _put_decimal(j, counter, buf);
	return (new_counter);
}
