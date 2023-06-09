#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: pointer to the destination buffer where the string will be copied to
 * @src: pointer to the source string that will be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;
	int length;

	length = strlen(src);

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
