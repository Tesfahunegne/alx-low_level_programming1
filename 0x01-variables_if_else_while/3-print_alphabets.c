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
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
