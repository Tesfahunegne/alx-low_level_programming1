#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2) == 0);
}
/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @resp: int
 * Return: int
 */
int check_prime(int n, int resp)
{
	if (n == 2)
		return (0);
	else if (n % resp == 0)
		return (1);
	else
		return (check_prime(n, resp + 1));
}
