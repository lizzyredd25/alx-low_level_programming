#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: grid of the 2D array
 * @av: height of the 2D array
 * Return: pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int k, tsz, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	tsz = 0;
	for (k = 0; k < ac; k++)
	{
		tsz = tsz + strlen(av[k]) + 1;
	}
	str = malloc((tsz + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	j = 0;
	for (k = 0; k < ac; k++)
	{
		for (i = 0; av[k][i] != '\0'; i++)
		{
			str[j] = av[k][i];
			j++;
		}
		str[j] = '\n';
		j++;
	}
	return (str);
}
