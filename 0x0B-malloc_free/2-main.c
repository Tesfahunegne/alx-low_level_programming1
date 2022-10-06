#include "main.h"

#include <stdio.h>

#include <stdlib.h>



/**
 *
 *  * main - check the code for ALX School students.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    char *s;
char *a = "Betty";
char *b = "Holberton";
	        s = str_concat(a,b); 

		    if (s == NULL)

			        {

					        printf("failed\n");

						        return (1);

							    }

		        printf("%s\n", s);

			    free(s);

			        return (0);

}
