#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: a pointer to the dupllicate string or NULL
 */
char *_strdup(char *str)
{
	char *cr;
	int i, size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	cr = (char *)malloc(sizeof(char) * size + 1);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = str[i];
	return (cr);
}
