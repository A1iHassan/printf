#include "main.h"

/**
 * flush - flush
 * @buf: buffer
 * @counter: the counter
 */
void flush(char *buf, int counter)
{
	write(1, buf, counter);
}
