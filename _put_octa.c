#include "main.h"

/**
 * _put_octa - print octal
 * @a: num
 * @counter: counter
 * @buf: buffer
 * Return: counter
 */
cr _put_octa(long a, cr counter, char *buf)
{
	cr new_counter, holder;
	int i = 0;
	int j;
	int arr[12];

	holder = counter;
	if (a == 0)
	{
		new_counter = _puts("0", buf, holder);
		return (new_counter);
	}
	while (a > 0)
	{
		arr[i] = a % 8;
		a /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		new_counter = _putchar('0' + arr[j], buf, holder);
		holder = new_counter;
	}
	return (new_counter);

}
