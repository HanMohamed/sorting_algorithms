#include "sort.h"

/**
 * bubble_sort - sorts an array of integers ascendingly
 * using the Bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 *
*/
void bubble_sort(int *array, size_t size)
{
	int temp, k;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 1, k = 0; j < size - i; j++, k++)
		{
			if (array[k] > array[j])
			{
				temp = array[k];
				array[k] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
