#include "main.h"

/**
 * _puts - print string
 * @str: pointer
 * @buf: buffer
 * @counter: the counter
 * Return: counter
 */

cr _puts(char *str, char *buf, cr counter)
{
	cr new_counts, holder;

	holder = counter;
	if (!str)
	{
		new_counts = _puts("(null)", buf, holder);
		return (new_counts);
	}
	while (*str != '\0')
	{
		new_counts = _putchar(*str, buf, holder);
		holder = new_counts;
		str++;
	}
	return (new_counts);
}
