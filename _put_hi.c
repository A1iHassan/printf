#include "main.h"

/**
 * _put_hi - short int
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
int _put_hi(short int a, int counter, char *buf)
{
	short int *i = &a;
	short int j = *i;

	counter = _put_decimal(j, counter, buf);
	return (counter);
}
