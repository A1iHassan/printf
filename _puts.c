#include "main.h"

/**
 * _puts - print string
 * @str: pointer
 * @buf: buffer
 * @counter: the counter
 * Return: counter
 */

int _puts(char *str, char *buf, int counter)
{
	while (*str != '\0')
	{
		counter = _putchar(*str, buf, counter);
		str++;
	}
	return (counter);
}
