#include "monty.h"
/**
  *f_sub- subtracts
  *@head: stack head
  *@counter: line counter
  *Return: no
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *x;
	int sub, nodes;

	x = *head;
	for (nodes = 0; x != NULL; nodes++)
		x = x->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: cannot sub, stack is short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	sub = x->next->n - x->n;
	x->next->n = sub;
	*head = x->next;
	free(x);
}
