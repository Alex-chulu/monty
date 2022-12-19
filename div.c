#include "monty.h"

/**
 * f_div - divides two elements of a stack on top
 * @head: head of stack
 * @counter: number of lines
 *Return: no
*/

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, x;

	he = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: cannot divide, the stack is short\n", counter);
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

	x = he->next->n / he->n;
	he->next->n = x;
	*head = he->next;
		free(he);
}
