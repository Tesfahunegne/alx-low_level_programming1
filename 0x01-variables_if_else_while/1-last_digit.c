#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -main block
 *
 * Description: get a random number and print the number
 * and if it is last digit is grater than 5
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %i is %i is  and 0\n", n, n % 10);
	else if (n % 10 < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
