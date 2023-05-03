#include "lists.h"
/**
  * delete_nodeint_at_index - Function deletes node at index of a linked list
  * @head: head of the linked list
  * @index: index to delete
  * Return: 1 if it succeeded, -1 if it failes
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	prev = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current->next != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == index)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
