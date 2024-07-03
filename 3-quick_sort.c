#include "sort.h"

/**
 * quick_sort - sorts an array of integers
 * in ascending order using the quick sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 *
*/
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	quick_Sort_help(array, 0, (int)size - 1, size);
}

/**
 * quick_Sort_help - helper function
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @start: start
 * @end: end
*/
void quick_Sort_help(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);

		quick_Sort_help(array, start, pivot - 1, size);
		quick_Sort_help(array, pivot + 1, end, size);
	}
}

/**
 * partition - partition implementation
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @start: start
 * @end: end
 *
 * return: int
*/
int partition(int *array, int start, int end, size_t size)
{
	int pivot, i, j;

	pivot = array[end];
	i = start;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			if (i < j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] > pivot)
	{
		swap(&array[i], &array[end]);
		print_array(array, size);
	}
	return (i);
}

/**
 *swap - swaps two elements
 *
 *@x: pointer to the first element
 *@y: pointer to the second element
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
