#include "main.h"

/**
 * get_bit - gets bit at an index
 *
 * @n: the number
 * @index: index within binary number
 *
 * Return: bit 0 or 1, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
