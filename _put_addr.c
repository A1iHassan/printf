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
	long ad = (long)s;
	long base = 16;
	long u = ad;
	long remainder;
	long num;
	long i = 0;
	int j;
	char hexnum[] = "0123456789abcdef";
	char hexad[16];

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
