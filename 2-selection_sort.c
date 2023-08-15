#include "sort.h"
/**
 * selection_sort - sorts array of integers
 * @array: pointer to the array to be sorted
 * @size: number of elements in the array
 * Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size <= 1)
	return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = j;

	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[min_idx])
		min_idx = j;
	}
	if (min_idx != 1)
	{
		int temp = array[i];
	
		array[i] = array[min_idx];
		array[min_idx] = temp;

		print_array(array, size);
	}
	}
}