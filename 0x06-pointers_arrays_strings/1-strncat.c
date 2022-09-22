#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src,
 * including the terminating
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strncat(char *dest, char *src, int n)

{



	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)

		;



	for (i = 0; i < n && src[i] != '\0'; i++)

			dest[dest_len + i] = src[i];



	/*should end with a end of string char*/

	dest[dest_len + i] = '\0';



	return (dest);

}
