#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: double pointer to the firat element of the list
 * Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *sort, *unsort, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)

	sort = *list;
	unsort = (*list)->next;

	while (unsort != NULL)
	{
		while (sort != NULL && sort->n > unsort->n)
		{
			temp = unsort->next;

		if (temp != NULL)
		temp->prev = unsort->prev;

		unsort->prev = sort->prev;
		unsort->next = sort;

		if (sort->prev != NULL)
		sort->prev->next = unsort;

		else
		*list = unsort;
		sort->prev = unsort;
		sort = unsort->prev;

		}
		sort = unsort;
		unsort = unsort->next;

		print_list(*list);
	}
}
