#include <stdio.h>
/**
 * main - main functionn that print the number of
 * argument passed to the function
 * @args: argument
 * @argv: argument victor
 * Return: 0
 */
int main(int args, char *argv[])
{
	int n1, n2, n3;

	if (args != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	n3 = n1 * n2;
	printf("%d\n", n3);
	return (0);
}
