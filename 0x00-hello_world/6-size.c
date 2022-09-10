#include <stdio.h>

/**
 * main - print the size of in printf function
 *
 * Descriptiom: using the main function
 * this prrogram print the size of in bytes
 * Return: 0
 */
int main(void)
{
	char C;
	int I;
	long LI;
	long long LLI;
	float F;

	printf("Size of a char: %byte(s)\n", sizeof(C));
	printf("Size of a int: %byte(s)\n", sizeof(I));
	printf("Size of a long: %byte(s)\n", sizeof(LI));
	printf("Size of a long long: %byte(s)\n", sizeof(LLI));
	printf("Size of a float: %byte(s)\n", sizeof(F));
	return (0);
}
