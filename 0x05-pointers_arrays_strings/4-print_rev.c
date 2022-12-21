#include"main.h"
/**
 * print_rev - prints str in reverse
 *
 * @s: string to print in reverse
 *
 * Return: always void
 */
void print_rev(char *s)
{
	int count, stringlen;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	stringlen = count;
	count = 0;
	while (*(s + count) != '\0')
		_putchar(*(s + (stringlen - (count++ + 1))));
	_putchar('\n');
}
