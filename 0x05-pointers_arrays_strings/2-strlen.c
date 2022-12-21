/**
 * _strlen - gets length of string
 *
 * @s: string to check length of
 *
 * Return: length of string as int
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
