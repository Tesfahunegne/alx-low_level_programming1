#include <stdio.h>
/**
 * main - man function fabunace
 * Description: print fabunance sequence
 * Return: o
 */
int main(void)
{
	int i;
	int n = 50;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;
	
	printf("%lu, %lu, ", t1, t2);
	for (i = 3; i <= n; ++i)
	{
	       printf("%lu, ", nextTerm);
	       
	       t1 = t2;
	       t2 = nextTerm;
	       nextTerm = t1 + t2;
	}
	return 0;
}
