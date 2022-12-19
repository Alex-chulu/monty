#include "monty.h"
/**
 * f_pstr - print the string from top of stack
 * @head: head of stack
 * @counter: line counter
 * Return: no return
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	
	while (he)
	{
		if (he->n > 127 || he->n <= 0)
		{
			break;
		}
		printf("%c", he->n);
		he = he->next;
	}
	printf("\n");
}
