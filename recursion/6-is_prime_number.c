#include "main.h"

int _prime_helper(int n, int divisor);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_helper(n, 2));
}

/**
 * _prime_helper - checks divisibility recursively
 * @n: number to check
 * @divisor: current divisor
 *
 * Return: 1 if prime, otherwise 0
 */
int _prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (_prime_helper(n, divisor + 1));
}
