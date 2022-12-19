#include "monty.h"
/**
 * f_pchar - prints a char at the top of stack
 * @head: stack head
 * @counter: line counter
 * Return: no
 */

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *he;

	he = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: cannot, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (he->n > 127 || he->n < 0)
	{
		fprintf(stderr, "L%d: cannot pchar, value, out range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", he->n);
}
