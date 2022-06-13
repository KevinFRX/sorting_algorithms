#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: the list to sort
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux1, *aux2;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	aux1 = (*list)->next;

	while (aux1 != NULL)
	{
		aux2 = aux1->next;
		while (aux1->prev != NULL && aux1->prev->n > aux1->n)
		{
			aux1->prev->next = aux1->next;
			if (aux1->next != NULL)
				aux1->next->prev = aux1->prev;
			aux1->next = aux1->prev;
			aux1->prev = aux1->next->prev;
			aux1->next->prev = aux1;
			if (aux1->prev == NULL)
				*list = aux1;
			else
				aux1->prev->next = aux1;
			print_list(*list);
		}
		aux1 = aux2;
	}
}
