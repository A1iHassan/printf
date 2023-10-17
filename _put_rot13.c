#include "main.h"

/**
 * *_put_rot - print rot
 * @s: pointer
 * Return: s
 */
int _put_rot(char *s, char *buff, int counter)
{
<<<<<<< HEAD
	int i, j;
	char *rott = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ROTT = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
=======
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
>>>>>>> e70d015866fcc12dd6fe5e9af0c45037b7500d67

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
