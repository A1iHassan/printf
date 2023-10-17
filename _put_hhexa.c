#include "main.h"

/**
 * _put_hhexa - print short hexa
 * @a: num
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */
int _put_hhexa(short int a, int counter, char *buf)
{
	int i = 0;
	int j;
	int arr[32];

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
