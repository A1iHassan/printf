#include "main.h"

/**
 * *_put_rot - print rot
 * @s: pointer
 * @buff: buffer pointer
 * @counter: for checking the return count
 * Return: s
 */
cr _put_rot(char *s, char *buff, cr counter)
{
	cr new_counter, holder;
	char *a;
	char *b;
	int i = 0;
	int j;

	holder = counter;
	if (!s)
	{
		new_counter = _puts("(null)", buff, counter);
		return (new_counter);
	}
	a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				new_counter = _putchar(b[j], buff, holder);
				holder = new_counter;
			}
			j++;
		}
		i++;
	}
	return (new_counter);
}
