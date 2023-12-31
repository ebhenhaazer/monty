#include "monty.h"

/**
 * free_stack - frees a stack_t list.
 * @head: a pointer to the head
 *
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *next;

	if (!head)
		return;

	next = head;
	while (next)
	{
		head = next;
		next = head->next;
		free(head);
	}

}
