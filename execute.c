#include "monty.h"
/**
 * execute - executes the opcode
 * @stack: linked list
 * @counter: line counter
 * @file: monty file pointer
 * @content: content
 * Return: no
 */

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", "f_push"},
		{"pall", "f_pall"},
		{"pint", "f_pint"},
		{"pop", "f_pop"},
		{"swap", "f_swap"},
		{"add", "f_add"},
		{"nop", "f_nop"},
		{"sub", "f_sub"},
		{"div", "f_div"},
		{"mul", "f_mul"},
		{"mod", "f_mod"},
		{"pchar", "f_pchar"},
		{"pstr", "f_pstr"},
		{"rot1", "f_rot1"},
		{"rotr", "f_rotr"},
		{"queue", "f_queue"},
		{"stack", "f_stack"},
		{NULL, NULL}
	};
	unsigned int x = 0;
	char *opp;

	opp = strtok(content, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[x].oppcode && opp)
	{
		if (strcmp(opp, opst[x].oppcode) == 0)
		{
			opst[x].f(stack, counter);
			return (0);
		}
		x++;
	}
	if (opp && opst[x].oppcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, opp);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
