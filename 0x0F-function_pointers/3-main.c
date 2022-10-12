#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - searches for an integer using a function
 * @argc: size of the input array
 * @argv: input array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n1, n2, val;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]), op = argv[2], n2 = atoi(argv[3]);
	func = get_op_func(op);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	val = func(n1, n2);
	printf("%d\n", val);
	return (0);
}
