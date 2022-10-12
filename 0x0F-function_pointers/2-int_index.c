/**
 * int_index - searches for an integer using a function
 * @array: array of int to iterate
 * @size: size of the array
 * @cmp: function to use
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int o;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (o = 0; o < size; o++)
		{
			if (cmp(array[o]) != 0)
				return (o);
		}
	}
	return (-1);
}
