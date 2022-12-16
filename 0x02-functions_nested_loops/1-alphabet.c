<<<<<<< HEAD
#include <main.h>
#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

=======
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
>>>>>>> 77f7fa7073cb85ebe027a8922e4885f4d5b89b13
}
