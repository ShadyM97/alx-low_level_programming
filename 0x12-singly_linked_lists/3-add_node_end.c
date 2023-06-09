#include "lists.h"
/**
  * add_node_end - function that adds a new node
  * at the end of a list_t list.
  * @head: pointer to head of list
  * @str: string to add to list
  * Return: address of the new element or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
