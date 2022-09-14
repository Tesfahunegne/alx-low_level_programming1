#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function return 0
 *
 * Description: print a to z except
 * e and q
 * Return: 0
 */
int main(void)
{
	char a = 'a'

		while (a <= 'z')
		{
			if (a != 'q' && a != 'e')
			{
				putchar(a);
			}
			a++;
		}
	putchar('\n');
	return (0);
}
