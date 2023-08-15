#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: double pointer to the firat element of the list
 * Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *prev_node, *temp_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

	current_node = (*list)->next;

	while (current_node != NULL)
	{
		temp_node = current_node;
		prev_node = current_node->prev;

	while (prev_node != NULL && prev_node->n > temp_node->n)
	{
		if (temp_node->next != NULL)
		temp_node->next->prev = prev_node;

		prev_node->next = temp_node->next;
		temp_node->prev = prev_node->prev;

	if (temp_node->prev != NULL)
	temp_node->prev->next = temp_node;

	prev_node->prev = temp_node;
	temp_node->next = prev_node;

	prev_node = temp_node->prev;

	if (temp_node->prev == NULL)
	*list = temp_node;

	print_list(*list);
	}

	current_node = current_node->next;
	}
}
