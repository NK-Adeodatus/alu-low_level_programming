#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string
 *
 * Description: This function prints the second half of a string.
 * If the number of characters is odd, it prints the last n characters,
 * where n = (length_of_the_string - 1) / 2
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int start;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	i = start;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
