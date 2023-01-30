#include "monty.h"
/**
 * f_mod - computes the rest
 * @head: head of stack
 * @counter: number of line
 * Return: no return
 */

void f_mod(stack_t **head, unsigned int counter)
{
	stack *he;
	int len = 0, x;

	he = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: cannot mod, the stack is short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	if (he->n == 0)
	{
		fprintf(stderr, "L%d: division by 0\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = he->next->n % he->n;
	he->next->n = x;
	*head = he->next;
	free(he);
}
