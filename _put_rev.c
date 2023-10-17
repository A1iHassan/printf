#include "main.h"

/**
 * _strlen - string length
 * @s: pointer
 * Return: sn
 */

int _strlen(char *s)
{
	int sn;

	for (sn = 0; *s != '\0'; s++)
		++sn;

	return (sn);
}

/**
 * _put_rev - print reverse
 * @p: pointer
 * @buf: buffer
 * @counter: the counter
 * Return: counter
 */
int _put_rev(char *p, int counter, char *buf)
{
	int l = _strlen(p);
	int i;

	for (i = l - 1; i >= 0; i--)
	{
		counter = _putchar(p[i], buf, counter);
	}
	return (counter);
}
