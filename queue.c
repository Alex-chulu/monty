#include "monty.h"
/**
 * f_queue - prints the top
 * @head: head stack
 * @counter: line counter
 * Return: no
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to stack tail
 * @n: new_value
 * @head: head of the stack
 * Return: no
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *x;

	x = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (x)
	{
		while (x->next)
			aux = aux->next;
	}
	if (!x)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		x->next = new_node;
		new_node->prev = x;
	}
}
