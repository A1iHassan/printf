#include "main.h"

/**
 * *_put_rot - print rot
 * @s: pointer
 * Return: s
 * @counter: counter
 * @buff: buffer
 */
int _put_rot(char *s, char *buff, int counter)
{

	char *a;
	char *b;
	int i = 0;
	int j;

	if (!s)
	{
		return (counter);
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
				counter = _putchar(b[j], buff, counter);
			}
			j++;
		}
		i++;
	}
	return (counter);
}
