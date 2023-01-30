#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line counter
 * Return: no
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int len = 0, x;

	h = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	x = he->n;
	he->n = he->next->n;
	he->next->n = x;
}
