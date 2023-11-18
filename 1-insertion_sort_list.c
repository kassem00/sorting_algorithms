#include "sort.h"
#include <stdlib.h>
/**
 * insertion_sort_list - sorts a doubly linked list,
 * of integers in ascending order
 * @list: doubly linked list of integers
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *node = (*list)->next;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return;
	while (node)
	{
		while ((node->prev) && (node->n < node->prev->n))
		{
			swap_node(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}


/**
 * swap_node - swap a node with its previous one
 * @node: node to swap
 * @list: node list
 * Return: void
 */
void swap_node(listint_t *node, listint_t **list)
{
	listint_t *old = node->prev;
	listint_t *temp = node;

	old->next = temp->next;
	if (temp->next)
		temp->next->prev = old;
	temp->next = old;
	temp->prev = old->prev;
	old->prev = temp;
	if (temp->prev)
		temp->prev->next = temp;
	else
		*list = temp;
}
