#include <stdio.h>
/**
 * main -cause an infinite loop
 *
 * Retirn: 0
 */
int main(void)
{
       int i;

       printif("Infinite loop incoming :(\n");

       i = 0;
       
       while (i < 1)
       {
	       putchar(i);
       }
					    
					            }
       printf("Infinite loop avoided! \\o/\n");
       return (0); 
}
