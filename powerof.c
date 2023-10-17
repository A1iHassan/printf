#include "main.h"

/**
 * powerof - pow
 * @base: the base
 * @power: power
 * Return: base * pow
 */

int powerof(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * powerof(base, power - 1));
}
