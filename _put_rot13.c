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

	int i, j;
	char *rott = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ROTT = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *a;
	char *b;
	int i = 0;
	int j;

	if (!s)
	{
		counter = _puts("(null)", buff, counter);
		return (counter);
	}
	a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (rott[j] != '\0')
		{
			if (s[i] == rott[j])
			{
				s[i] = ROTT[j];
				break;
			}
			j++;
		}
		i++;
	}
	counter = _puts(s, buff, counter);
	return (counter);
}
