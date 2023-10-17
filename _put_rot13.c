#include "main.h"

/**
 * *_put_rot - print rot
 * @s: pointer
 * Return: s
 */
int _put_rot(char *s, char *buff, int counter)

{
	int i, j;
	char *rott = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ROTT = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
