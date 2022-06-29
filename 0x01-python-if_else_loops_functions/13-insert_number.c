#include "lists.h"

/**
* insert_node - inserts a number into a sorted singly linked list
* @head: pointer to head node
* @number: value to be inserted
*
* Return: address of new node or NULL on failure
*/
listint_t *insert_node(listint_t **head, int number)
{
		listint_t *current = &head;
		listint_t *next = current->next;
		while (current->next != '\0')
		{
				if (next->n > number)
				{
						current->n = number;
						current->next = current->next;
						return (current);
				}
				current = current->next;
		}
		return (NULL)
	new->n = number;
	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node && node->next && node->next->n < number)
		node = node->next;
	new->next = node->next;
	node->next = new;
	return (new);
}
