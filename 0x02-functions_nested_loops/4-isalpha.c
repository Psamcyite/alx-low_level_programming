<<<<<<< HEAD
#include <main.h>
#include <stdio.h>
=======
#include "main.h"
>>>>>>> 77f7fa7073cb85ebe027a8922e4885f4d5b89b13

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
