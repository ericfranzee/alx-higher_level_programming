#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list out
 * @h: pointer to head of the list
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}

/**
 * add_nodeint - adds new node to the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: this is the integer to be included in node
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * free_listint - frees up the listint_t list
 * @head: pointer to list to be freed
 * Return: void or nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
