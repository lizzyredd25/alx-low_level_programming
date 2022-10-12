#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: size of array argv
 * @argv: array of inputs
 * Return: 0
 */
int main(int argc, char **argv)
{
	int nb, l;
	char *bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	bytes = (char *)main;
	for (l = 0; l < nb; l++)
	{
		if (l == nb - 1)
		{
			printf("%02hhx\n", bytes[l]);
			break;
		}
		printf("%02hhx ", bytes[l]);
	}
	return (0);
}
