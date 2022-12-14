#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to string s
 * @src: pointer to string s
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
