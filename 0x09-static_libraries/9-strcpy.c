#include "main.h"
/**
 * _strcpy - copies a string pointed by src to the buffer
 * @dest: destination of the string
 * @src: source of the string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (c >= 0)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (dest);
}
