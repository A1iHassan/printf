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
cr _put_rev(char *p, cr counter, char *buf)
{
	cr new_counter, holder;
	int l = _strlen(p);
	int i;

	holder = counter;
	for (i = l - 1; i >= 0; i--)
	{
		new_counter = _putchar(p[i], buf, holder);
		holder = new_counter;
	}
	return (new_counter);
}
