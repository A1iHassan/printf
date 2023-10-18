#include "main.h"

/**
 * _put_pers - prints a % sign
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */

cr _put_pers(cr counts, char *buf)
{
	cr new_counts;

	new_counts = _putchar('%', buf, counts);

	return (new_counts);
}
