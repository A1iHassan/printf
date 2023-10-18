#include "main.h"

/**
 * _put_hhexa_cap - short hexa
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: countee
 */
cr _put_hhexa_cap(short int a, cr counter, char *buf)
{
	cr new_counter, holder;
	int i = 0;
	int j;
	int arr[32];

	holder = counter;
	if (a == 0)
	{
		new_counter = _puts("0", buf, holder);
		return (new_counter);
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
			new_counter = _putchar('0' + arr[j], buf, holder);
			holder = new_counter;
		}
		else
		{
			new_counter = _putchar(arr[j] + 55, buf, holder);
			holder = new_counter;
		}
	}
	return (new_counter);
}
