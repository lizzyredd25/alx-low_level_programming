#include <stddef.h>
/**
 * array_iterator - iterates over an array using a function
 * @array: array of int to iterate
 * @size: size of the array
 * @action: function to use
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int o;

	if (!array || !action)
		return;
	for (o = 0; o < (int)size; o++)
	{
		action(array[o]);
	}
}
