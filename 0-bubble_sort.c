#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int aux, flag = 1;
	size_t i, len = size;

	if (size < 2)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 0; i + 1 < len; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
				flag = 1;
			}
			else
				flag = 0;
		}
		len--;
	}
}
