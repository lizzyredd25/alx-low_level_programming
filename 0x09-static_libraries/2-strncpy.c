#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: destination str
 * @src: source str
 * @n: number of characters from cource str
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
