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
	quick_Sort_help(array, 0, (int)size - 1, size);
}

void quick_Sort_help(int *array, int low, int high, size_t size)
{
	int master_card;

	if (low < high)
	{

		master_card = div_array(array, low, high, size);

		quick_Sort_help(array, low, master_card - 1, size);
		quick_Sort_help(array, master_card + 1, high, size);
	}
}

int div_array(int *array, int low, int high, size_t size)
{
	int master_card, temp, i, j;

	master_card = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < master_card)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);
	return (i + 1);
}
