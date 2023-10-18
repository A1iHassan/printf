#include "main.h"

/**
 * put_addr - print address
 * @s: pointer
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
cr put_addr(const void *s, cr counter, char *buf)
{
	cr new_counts, holder;
	long ad;
	long base = 16;
	long u;
	long remainder;
	long num;
	long i = 0;
	int j;
	char hexnum[] = "0123456789abcdef";
	char hexad[16];

	holder = counter;
	if (s == NULL)
	{
		new_counts = _puts("(null)", buf, holder);
		return (new_counts);
	}
	ad = (long)s;
	u = ad;
	new_counts = _putchar('0', buf, holder);
	holder = new_counts;
	new_counts = _putchar('x', buf, holder);
	holder = new_counts;
	do {
		remainder = u % base;
		num = remainder;
		hexad[i++] = hexnum[num];
		u /= base;
	} while (u != 0);
	for (j = i - 1; j >= 0; j--)
	{
		new_counts = _putchar(hexad[j], buf, holder);
		holder = new_counts;
	}
	return (new_counts);
}
