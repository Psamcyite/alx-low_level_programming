#include"main.h"
/**
 * _puts - puts string to stdout
 *
 * @str: string to print to stdout
 *
 * Return: always void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
