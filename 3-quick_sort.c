#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return; void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	sort(array, size, 0, size - 1);
}
/**
 * partition - finds the partition for the quicksort
 * @array: array
 * @size: size
 * @left: left
 * @right: right
 *
 * Return: the index
 */
size_t partition(int *array, size_t size, int left, int right)
{
	int i, j, aux, piv;

	piv = array[right];
	i = left - 1;
	for (j = left; j < right; j++)
	{
		if (array[j] < piv)
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[right] < array[i + 1])
	{
		aux = array[i + 1];
		array[i + 1] = array[right];
		array[right] = aux;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * sort - sorts a partition
 * @array: array
 * @size: size
 * @left: left
 * @right: right
 *
 * Return: void
 */
void sort(int *array, size_t size, int left, int right)
{
	size_t piv;

	if (right > left)
	{
		piv = partition(array, size, left, right);
		sort(array, size, left, piv - 1);
		sort(array, size, piv + 1, right);

	}
}
