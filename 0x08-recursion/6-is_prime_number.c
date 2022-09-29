#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */
int check_prime(int i, int num)
{
	if (num == i)
		return (0);
	else
		if (num % i == 0)
			return (1);
		else
		{
			return  (check_prime(i + 1, num));
		}
}
int is_prime_number(int n)

{
	if (check_prime(2, n) == 0)
		return (1);
	else
		return (0);
}
/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @resp: int
 * Return: int
 */

