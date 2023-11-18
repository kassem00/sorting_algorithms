#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order,
 * using the Bubble sort algorithm
 * @array: array of elements
 * @size: size of given array
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	int i, temp, x = size, flag = 0;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (flag == BUB_FALSE)
	{
		flag = BUB_TRUE;
		for (i = 0; i < (x - 1); i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = *(array + i);
				*(array + i) = *(array + i + 1);
				*(array + i + 1) = temp;
				print_array(array, size);
				flag = BUB_FALSE;
			}
		}

		x--;
	}
}
