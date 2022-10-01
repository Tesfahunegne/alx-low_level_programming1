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
	int i;

	for (i = 0; i < args; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
