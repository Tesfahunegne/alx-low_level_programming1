#include <stdio.h>
/**
 * main - main function
 *
 * Description: print all single digit number of base 10 and
 * starting from 0
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');
	return (0);
}
