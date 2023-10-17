#include "main.h"

/**
 * _put_hocta - short octa
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
int _put_hocta(short int a, int counter, char *buf)
{
	int i = 0;
	int j;
	int arr[12];

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