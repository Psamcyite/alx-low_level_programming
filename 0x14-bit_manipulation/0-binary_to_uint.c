#include "main.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 *
 * @b: the char string
 *
 * Return: converted decimal number or 0 if there is an unconvertible character
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);

	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i) == '1')
			num = (num << 1) | 1;
		else if (*(b + i) == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
