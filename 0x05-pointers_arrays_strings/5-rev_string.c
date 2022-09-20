#includ "main.h"
/**
 * rev_string - revers a string in back wards
 * @s - pointer for string
 * Rerurn: reverse string
 */
void rev_string(char *s)
{
	int length, c;

	   char *begin, *end, temp;

	    

	      length = string_length(s);
	         begin = s;

		    end = string;

		     

		       for ( c = 0 ; c < ( length - 1 ) ; c++ )

			             end++;

		        

		          for ( c = 0 ; c < length/2 ; c++ ) 

				     {        

					           temp = *end;

						         *end = *begin;

							       *begin = temp;

							        

							             begin++;

								           end--;

									      }
}
