#include "monty.h"
/**
 * f_add - adds two elements of stack
 * @head: head of stack
 * @counter: line counter
 * Return: no
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int len = 0, x;

	he = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: cannot add, the stack is short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	x = he->n + he->->n;
	he->next->n = x;
	*head = he->next;
	free(he);
}
