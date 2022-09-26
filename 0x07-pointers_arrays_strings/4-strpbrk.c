#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: destination memeory area
 * @accept: bytes of the memory area
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
