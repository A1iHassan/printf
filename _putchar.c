#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @buf: buffer
 * @counter: counter
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, char *buf, int counter)
{
	if (counter == BUFFER_SIZE)
	{
		flush(buf, counter);
		counter = 0;
	}
	buf[counter] = c;
	counter++;
	return (counter);
}
