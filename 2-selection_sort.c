#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order,
 * using the selection algorithm
 * @array: array of elements
 * @size: size of given array
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		swap_at_index(array, find_min(array, size, i), (int)i);
		print_array(array, size);
	}
}

/**
 * swap_at_index - swap to elements in array,
 * @array: array of elements
 * @to: swap to this index
 * @from: swap from this index
 * Return: Always 0
 */

void swap_at_index(int *array, int to, int from)
{
	int temp = array[from];

	array[from] = array[to];
	array[to] = temp;
}

/**
 * find_min - find minimum
 * @array: array of elements
 * @size: size of array
 * @index: index of element
 * Return: Always 0
 */
int find_min(int *array, size_t size, int index)
{
	int min_index = index;
	int i;

	for (i = index; i < (int)size; i++)
	{
		if (array[i] < array[min_index])
			min_index = i;
	}

	return (min_index);
}
