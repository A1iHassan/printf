#include "main.h"

/**
 * _put_octa - print octal
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
int _put_octa(long a, int counter, char *buf)
{
	int i = 0;
	int j;
	int arr[12];

	if (a == 0)
	{
		counter = _puts("0", buf, counter);
		return (counter);
	}
	while (a > 0)
	{
		arr[i] = a % 8;
		a /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		counter = _putchar('0' + arr[j], buf, counter);
	}
	return (counter);

}
