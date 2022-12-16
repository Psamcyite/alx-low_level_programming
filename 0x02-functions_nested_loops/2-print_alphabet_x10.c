<<<<<<< HEAD
#include <main.h>
#include <stdio.h>
=======
#include "main.h"
>>>>>>> 77f7fa7073cb85ebe027a8922e4885f4d5b89b13

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
