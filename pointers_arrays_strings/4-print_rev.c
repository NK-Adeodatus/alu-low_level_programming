#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string to print
 *
 * Description: This function finds the length of the string first,
 * and prints each character starting from the last character
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
