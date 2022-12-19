#include "monty.h"
/**
 * f_pop - prints the top
 * @head: head of stack
 * @counter: line counter
 * Return: no
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *he;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: cannot pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	*head = he->next;
	free(he);
}
