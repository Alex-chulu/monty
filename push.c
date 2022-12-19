#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: head of stack
 * @counter: line counter
 * Return: no
 */

void f_push(stack_t **head, unsigned int counter)
{
	int x, y, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '_')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || 	bus.arg[y] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, x);
	else
		addnode(head, x);
}
