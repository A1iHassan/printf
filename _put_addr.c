#include "main.h"

/**
 * put_addr - print address
 * @s: pointer
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
int put_addr(const void *s, int counter, char *buf)
{
	long ad;
	long base = 16;
	long u;
	long remainder;
	long num;
	long i = 0;
	int j;
	char hexnum[] = "0123456789abcdef";
	char hexad[16];

	if (s == NULL)
	{
		counter = _puts("(null)", buf, counter);
		return (counter);
	}
	ad = (long)s;
	u = ad;
	counter = _putchar('0', buf, counter);
	counter = _putchar('x', buf, counter);
	do {
		remainder = u % base;
		num = remainder;
		hexad[i++] = hexnum[num];
		u /= base;
	} while (u != 0);
	for (j = i - 1; j >= 0; j--)
	{
		counter = _putchar(hexad[j], buf, counter);
	}
	return (counter);
}
