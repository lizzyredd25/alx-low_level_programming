#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: destination memory area
 * @accept: bytes of the memory area
 * Return: number of bytes in the initial segment of s which consist 
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
