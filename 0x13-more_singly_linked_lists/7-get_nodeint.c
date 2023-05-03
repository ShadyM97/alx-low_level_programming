#include "lists.h"
/**
  * get_nodeint_at_index - function that returns the nth node of a linked list
  * @head: head of linked list
  * @index: index of the node
  * Return: node of linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
