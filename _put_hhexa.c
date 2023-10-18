#include "main.h"

/**
 * _put_hhexa - print short hexa
 * @a: num
 * @counter: the counter
 * @buf: buffer
 * Return: counter
 */
cr _put_hhexa(short int a, cr counter, char *buf)
{
	cr new_counter, holder;
	int i = 0;
	int j;
	int arr[32];

	holder = counter;
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
			new_counter = _putchar('0' + arr[j], buf, holder);
			holder = new_counter;
		}
		else
		{
			new_counter = _putchar(arr[j] + 87, buf, holder);
			holder = new_counter;
		}
	}
	return (new_counter);
}
