#include "sort.h"
/**
 * bubble_sort - sorts an array of integers
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t i, j;

	if (array == NULL || size <= 1)
	return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
		if (!swap)
		break;
	}
}
