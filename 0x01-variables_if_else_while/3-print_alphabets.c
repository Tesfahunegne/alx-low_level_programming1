#include <stdio.h>
#include <stdlib.h>
/**
 * main - main funcution
 *
 * Description: print the alphabet in lowercase,
 * and uppercase followed by new line
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	char b = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
