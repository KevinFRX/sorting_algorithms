#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int aux;
	size_t i, j, x;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[x])
				x = j;
		}
		aux = array[i];
		array[i] = array[x];
		array[x] = aux;
		if (i != x)
			print_array(array, size);
	}
}
