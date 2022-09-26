#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: destination str
 * @b: constant byte
 * @n: bytes of the memory area pointed to
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
