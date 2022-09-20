#include "main.h"
#include <stdio.h>
/**
 * print_array - print `n` elements of an array of integers
 * Description: Numbers must be separated by comma and space
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
