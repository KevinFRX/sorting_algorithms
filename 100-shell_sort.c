#include "sort.h"

/**
* shell_sort - sorts an array of integers in ascending order
* using the Shell sort algorithm, using the Knuth sequence
* @array: the array to sort
* @size: the size of the array
*
* Return: void
*/

void shell_sort(int *array, size_t size)
{
	size_t inter = 1, j, i;
	int aux;

	if (size < 2)
		return;

	while (inter < size / 3)
		inter = inter * 3 + 1;

	for (; inter > 0; inter = (inter - 1) / 3)
	{
		for (i = inter; i < size; i++)
		{
			aux = array[i];
			for (j = i; j >= inter && aux <= array[j - inter]; j -= inter)
				array[j] = array[j - inter];
			array[j] = aux;
		}
		print_array(array, size);
	}
}
