#include "sort.h"
/**
 * quick_sort - sorts an array of integers
 * @array: pointer to the array to be sorted
 * @size: number of elements in the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
	return;

	quick_sort_recursive(array, 0, size - 1);
}
/**
 * swap - swaps teo integers
 * @a: pointer to the first integer
 * @b: pointer to the first integer
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - performs scheme to partiotion
 * @array: pointer to the array to be partitioned
 * @low: starting index of the partition
 * @high: ending index of the partition
 * Return: index of pivot after partitioning
*/
int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, high + 1);
		}
	}

	swap(&array[i + 1], &array[high]);
	print_array(array, high + 1);

	return (i + 1);
}
/**
 * quick_sort_recursive - sort an array of integers
 * @array: pointer to the array to be sorted
 * @low: starting index of the partition
 * @high: ending index of the partition
 * Return: Nothing
*/
void quick_sort_recursive(int *array, int low, int high)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high);

		quick_sort_recursive(array, low, pi - 1);
		quick_sort_recursive(array, pi + 1, high);
	}
}
