#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 *
 * Description: Get a random mumber and print the number
 * and if it is postive , negative or zero
 *
 * Return : o
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_max / 2;
	if (n > 0)
		printf("%i is postive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
