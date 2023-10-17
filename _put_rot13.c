#include "main.h"

/**
 * *_put_rot - print rot
 * @s: pointer
 * @buff: buffer pointer
 * @counter: for checking the return count
 * Return: s
 */
int _put_rot(char *s, char *buff, int counter)

{
	char *a;
	char *b;
	int i = 0;
	int j;

	a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
				counter = _putchar(b[j], buff, counter);
			j++;
		}
		i++;
	}
	return (counter);
}
