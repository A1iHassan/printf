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
cr _putchar(char c, char *buf, cr counts)
{
	cr new_counts;

	if (counts.counter == BUFFER_SIZE)
	{
		flush(buf, counts.counter);
		counts.counter = 0;
	}
	buf[counts.counter] = c;
	counts.counter++;
	counts.ret_count++;
	new_counts.counter = counts.counter;
	new_counts.ret_count = counts.ret_count;
	return (new_counts);
}
