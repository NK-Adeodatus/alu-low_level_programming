#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Description: This function reverses a string in place by swapping
 * characters from the beginning and end, working towards the middle
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
