#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: The list to be printed
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int key;

	if (!*list || !**list)
		return;

	tmp = *list;
	while (tmp->next)
	{
		while (tmp && tmp->n > tmp->next->n)
		{
			key = tmp->n;
			*(int *)&tmp->n = tmp->next->n;
			*(int *)&tmp->next->n = key;
			tmp = *list;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
