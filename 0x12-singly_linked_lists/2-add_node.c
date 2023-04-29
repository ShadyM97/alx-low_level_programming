#include "lists.h"
/**
  * add_node - function that adds a new node
  * at the beginning of a list_t list.
  * @head: pointer to head of list
  * @str: string to add to list
  * Return: address of the new element or NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;
	return (*head);
}
