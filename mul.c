#include "monty.h"
/**
 * f_mul - multiplies the top two stack elements.
 * @head: stack head
 * @counter: line_number
 * Return: no
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: cannot mul, stack is short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	xe = he->next->n * he->n;
	he->next->n = x;
	*head = h->next;
	free(h);
}
