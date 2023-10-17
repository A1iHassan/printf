#include "main.h"

/**
 * _put_pers - prints a % sign
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */

int _put_pers(int counter, char *buf)
{
	counter = _putchar('%', buf, counter);

	return (counter);
}
