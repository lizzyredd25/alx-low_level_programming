#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1 to concat
 * @s2: string 2 to concat
 * Return: a pointer to the new memory for the 2 strings or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *cr;
	int i, l1, l2, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	cr = (char *)malloc(sizeof(char) * (l1 + l2) + 1);
	if (cr == NULL)
		return (NULL);
	for (i = 0, k = 0; i < l1; i++, k++)
		cr[k] = s1[i];
	for (i = 0; i < l2; i++, k++)
		cr[k] = s2[i];
	return (cr);
}
