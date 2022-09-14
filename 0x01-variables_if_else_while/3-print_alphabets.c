#include <stdio.h>
#include <stlib.h>
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

	char A = 'A';

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
