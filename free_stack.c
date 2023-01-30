#include "monty.h"
/**
 * free_stack - frees  adoubly linked list
 * @head: stack head
 */

void free_stack(stack_t *head)
{
	stack_t *x;

	x = head;
	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
