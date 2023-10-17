#include "main.h"

/**
 * _put_hexa - print hexadecimal num
 * @a: number
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */
int _put_hexa(long a, int counter, char *buf)
{
	int i = 0;
	int j;
	int arr[64];

	if (a == 0)
	{
		counter = _puts("0", buf, counter);
		return (counter);
	}
	while (a > 0)
	{
		arr[i] = a % 16;
		a /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (arr[j] >= 0 && arr[j] <= 9)
		{
			counter = _putchar('0' + arr[j], buf, counter);
		}
		else
		{
			counter = _putchar(arr[j] + 87, buf, counter);
		}
	}
	return (counter);
}
